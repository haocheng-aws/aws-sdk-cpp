/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SQS
{
namespace Model
{

  class AWS_SQS_API MessageSystemAttributeValue
  {
  public:
    MessageSystemAttributeValue();
    MessageSystemAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    MessageSystemAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    
    inline MessageSystemAttributeValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    
    inline MessageSystemAttributeValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    
    inline MessageSystemAttributeValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    
    inline const Aws::Utils::ByteBuffer& GetBinaryValue() const{ return m_binaryValue; }

    
    inline bool BinaryValueHasBeenSet() const { return m_binaryValueHasBeenSet; }

    
    inline void SetBinaryValue(const Aws::Utils::ByteBuffer& value) { m_binaryValueHasBeenSet = true; m_binaryValue = value; }

    
    inline void SetBinaryValue(Aws::Utils::ByteBuffer&& value) { m_binaryValueHasBeenSet = true; m_binaryValue = std::move(value); }

    
    inline MessageSystemAttributeValue& WithBinaryValue(const Aws::Utils::ByteBuffer& value) { SetBinaryValue(value); return *this;}

    
    inline MessageSystemAttributeValue& WithBinaryValue(Aws::Utils::ByteBuffer&& value) { SetBinaryValue(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetStringListValues() const{ return m_stringListValues; }

    
    inline bool StringListValuesHasBeenSet() const { return m_stringListValuesHasBeenSet; }

    
    inline void SetStringListValues(const Aws::Vector<Aws::String>& value) { m_stringListValuesHasBeenSet = true; m_stringListValues = value; }

    
    inline void SetStringListValues(Aws::Vector<Aws::String>&& value) { m_stringListValuesHasBeenSet = true; m_stringListValues = std::move(value); }

    
    inline MessageSystemAttributeValue& WithStringListValues(const Aws::Vector<Aws::String>& value) { SetStringListValues(value); return *this;}

    
    inline MessageSystemAttributeValue& WithStringListValues(Aws::Vector<Aws::String>&& value) { SetStringListValues(std::move(value)); return *this;}

    
    inline MessageSystemAttributeValue& AddStringListValues(const Aws::String& value) { m_stringListValuesHasBeenSet = true; m_stringListValues.push_back(value); return *this; }

    
    inline MessageSystemAttributeValue& AddStringListValues(Aws::String&& value) { m_stringListValuesHasBeenSet = true; m_stringListValues.push_back(std::move(value)); return *this; }

    
    inline MessageSystemAttributeValue& AddStringListValues(const char* value) { m_stringListValuesHasBeenSet = true; m_stringListValues.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetBinaryListValues() const{ return m_binaryListValues; }

    
    inline bool BinaryListValuesHasBeenSet() const { return m_binaryListValuesHasBeenSet; }

    
    inline void SetBinaryListValues(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues = value; }

    
    inline void SetBinaryListValues(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues = std::move(value); }

    
    inline MessageSystemAttributeValue& WithBinaryListValues(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetBinaryListValues(value); return *this;}

    
    inline MessageSystemAttributeValue& WithBinaryListValues(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetBinaryListValues(std::move(value)); return *this;}

    
    inline MessageSystemAttributeValue& AddBinaryListValues(const Aws::Utils::ByteBuffer& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues.push_back(value); return *this; }

    
    inline MessageSystemAttributeValue& AddBinaryListValues(Aws::Utils::ByteBuffer&& value) { m_binaryListValuesHasBeenSet = true; m_binaryListValues.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetDataType() const{ return m_dataType; }

    
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    
    inline void SetDataType(const Aws::String& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    
    inline void SetDataType(Aws::String&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    
    inline void SetDataType(const char* value) { m_dataTypeHasBeenSet = true; m_dataType.assign(value); }

    
    inline MessageSystemAttributeValue& WithDataType(const Aws::String& value) { SetDataType(value); return *this;}

    
    inline MessageSystemAttributeValue& WithDataType(Aws::String&& value) { SetDataType(std::move(value)); return *this;}

    
    inline MessageSystemAttributeValue& WithDataType(const char* value) { SetDataType(value); return *this;}

  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Utils::ByteBuffer m_binaryValue;
    bool m_binaryValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringListValues;
    bool m_stringListValuesHasBeenSet = false;

    Aws::Vector<Aws::Utils::ByteBuffer> m_binaryListValues;
    bool m_binaryListValuesHasBeenSet = false;

    Aws::String m_dataType;
    bool m_dataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
