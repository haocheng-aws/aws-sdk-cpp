/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.sqs;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import com.amazonaws.util.awsclientgenerator.generators.cpp.QueryCppClientGenerator;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.HashMap;

public class SQSQueryXmlCppClientGenerator extends JsonCppClientGenerator {

    public SQSQueryXmlCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {
        Shape shape = new Shape();
        shape.setName("ResponseMetadata");
        shape.setReferenced(true);
        shape.setType("structure");

        Shape stringShape = new Shape();
        stringShape.setName("RequestId");
        stringShape.setType("string");

        ShapeMember stringShapeMember = new ShapeMember();
        stringShapeMember.setShape(stringShape);
        shape.setMembers(new HashMap<>());
        shape.getMembers().put("RequestId", stringShapeMember);

        serviceModel.getShapes().put("ResponseMetadata", shape);

        ShapeMember responseMetadataMember = new ShapeMember();
        responseMetadataMember.setShape(shape);
        responseMetadataMember.setLocation("header");
        responseMetadataMember.setLocationName("x-amzn-requestid");

        for (Shape resultShape : serviceModel.getShapes().values()) {
            if (resultShape.isResult()) {
                resultShape.getMembers().put("ResponseMetadata", responseMetadataMember);
            }
        }

        Shape queueAttributeNameShape = serviceModel.getShapes().get("QueueAttributeName");

        //currently SQS doesn't model some values that can be returned as "members" of the QueueAttributeName enum
        //this is not the right solution. The right solution is to add a separate enum for use for ReceiveMessageRequest
        //but backwards compatibility and all that...
        //anyways, add the missing values here.
        if(queueAttributeNameShape != null) {
            queueAttributeNameShape.getEnumValues().add("SentTimestamp");
            queueAttributeNameShape.getEnumValues().add("ApproximateFirstReceiveTimestamp");
            queueAttributeNameShape.getEnumValues().add("ApproximateReceiveCount");
            queueAttributeNameShape.getEnumValues().add("SenderId");
        }

        return super.generateSourceFiles(serviceModel);
    }

//    @Override
//    protected SdkFileEntry generateClientSourceFile(final ServiceModel serviceModel) throws Exception {
//        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/sqs/SQSServiceClientSource.vm", StandardCharsets.UTF_8.name());
//
//        VelocityContext context = createContext(serviceModel);
//        context.put("CppViewHelper", CppViewHelper.class);
//
//        String fileName = String.format("source/%sClient.cpp", serviceModel.getMetadata().getClassNamePrefix());
//
//        return makeFile(template, context, fileName, true);
//    }
}
