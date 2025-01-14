﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/CSVOutput.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Describes how the select output is serialized.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/OutputSerialization">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API OutputSerialization
  {
  public:
    OutputSerialization();
    OutputSerialization(Aws::Utils::Json::JsonView jsonValue);
    OutputSerialization& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the serialization of CSV-encoded query results.</p>
     */
    inline const CSVOutput& GetCsv() const{ return m_csv; }

    /**
     * <p>Describes the serialization of CSV-encoded query results.</p>
     */
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }

    /**
     * <p>Describes the serialization of CSV-encoded query results.</p>
     */
    inline void SetCsv(const CSVOutput& value) { m_csvHasBeenSet = true; m_csv = value; }

    /**
     * <p>Describes the serialization of CSV-encoded query results.</p>
     */
    inline void SetCsv(CSVOutput&& value) { m_csvHasBeenSet = true; m_csv = std::move(value); }

    /**
     * <p>Describes the serialization of CSV-encoded query results.</p>
     */
    inline OutputSerialization& WithCsv(const CSVOutput& value) { SetCsv(value); return *this;}

    /**
     * <p>Describes the serialization of CSV-encoded query results.</p>
     */
    inline OutputSerialization& WithCsv(CSVOutput&& value) { SetCsv(std::move(value)); return *this;}

  private:

    CSVOutput m_csv;
    bool m_csvHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
