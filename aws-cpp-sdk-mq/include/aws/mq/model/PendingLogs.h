﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>

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
namespace MQ
{
namespace Model
{

  /**
   * <p>The list of information about logs to be enabled for the specified
   * broker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/PendingLogs">AWS API
   * Reference</a></p>
   */
  class AWS_MQ_API PendingLogs
  {
  public:
    PendingLogs();
    PendingLogs(Aws::Utils::Json::JsonView jsonValue);
    PendingLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.</p>
     */
    inline bool GetAudit() const{ return m_audit; }

    /**
     * <p>Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.</p>
     */
    inline bool AuditHasBeenSet() const { return m_auditHasBeenSet; }

    /**
     * <p>Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.</p>
     */
    inline void SetAudit(bool value) { m_auditHasBeenSet = true; m_audit = value; }

    /**
     * <p>Enables audit logging. Every user management action made using JMX or the
     * ActiveMQ Web Console is logged.</p>
     */
    inline PendingLogs& WithAudit(bool value) { SetAudit(value); return *this;}


    /**
     * <p>Enables general logging.</p>
     */
    inline bool GetGeneral() const{ return m_general; }

    /**
     * <p>Enables general logging.</p>
     */
    inline bool GeneralHasBeenSet() const { return m_generalHasBeenSet; }

    /**
     * <p>Enables general logging.</p>
     */
    inline void SetGeneral(bool value) { m_generalHasBeenSet = true; m_general = value; }

    /**
     * <p>Enables general logging.</p>
     */
    inline PendingLogs& WithGeneral(bool value) { SetGeneral(value); return *this;}

  private:

    bool m_audit;
    bool m_auditHasBeenSet = false;

    bool m_general;
    bool m_generalHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
