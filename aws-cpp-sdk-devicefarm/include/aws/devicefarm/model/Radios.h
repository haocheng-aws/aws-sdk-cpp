﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents the set of radios and their states on a device. Examples of radios
   * include Wi-Fi, GPS, Bluetooth, and NFC.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Radios">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API Radios
  {
  public:
    Radios();
    Radios(Aws::Utils::Json::JsonView jsonValue);
    Radios& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if Wi-Fi is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline bool GetWifi() const{ return m_wifi; }

    /**
     * <p>True if Wi-Fi is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline bool WifiHasBeenSet() const { return m_wifiHasBeenSet; }

    /**
     * <p>True if Wi-Fi is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline void SetWifi(bool value) { m_wifiHasBeenSet = true; m_wifi = value; }

    /**
     * <p>True if Wi-Fi is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline Radios& WithWifi(bool value) { SetWifi(value); return *this;}


    /**
     * <p>True if Bluetooth is enabled at the beginning of the test. Otherwise,
     * false.</p>
     */
    inline bool GetBluetooth() const{ return m_bluetooth; }

    /**
     * <p>True if Bluetooth is enabled at the beginning of the test. Otherwise,
     * false.</p>
     */
    inline bool BluetoothHasBeenSet() const { return m_bluetoothHasBeenSet; }

    /**
     * <p>True if Bluetooth is enabled at the beginning of the test. Otherwise,
     * false.</p>
     */
    inline void SetBluetooth(bool value) { m_bluetoothHasBeenSet = true; m_bluetooth = value; }

    /**
     * <p>True if Bluetooth is enabled at the beginning of the test. Otherwise,
     * false.</p>
     */
    inline Radios& WithBluetooth(bool value) { SetBluetooth(value); return *this;}


    /**
     * <p>True if NFC is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline bool GetNfc() const{ return m_nfc; }

    /**
     * <p>True if NFC is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline bool NfcHasBeenSet() const { return m_nfcHasBeenSet; }

    /**
     * <p>True if NFC is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline void SetNfc(bool value) { m_nfcHasBeenSet = true; m_nfc = value; }

    /**
     * <p>True if NFC is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline Radios& WithNfc(bool value) { SetNfc(value); return *this;}


    /**
     * <p>True if GPS is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline bool GetGps() const{ return m_gps; }

    /**
     * <p>True if GPS is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline bool GpsHasBeenSet() const { return m_gpsHasBeenSet; }

    /**
     * <p>True if GPS is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline void SetGps(bool value) { m_gpsHasBeenSet = true; m_gps = value; }

    /**
     * <p>True if GPS is enabled at the beginning of the test. Otherwise, false.</p>
     */
    inline Radios& WithGps(bool value) { SetGps(value); return *this;}

  private:

    bool m_wifi;
    bool m_wifiHasBeenSet = false;

    bool m_bluetooth;
    bool m_bluetoothHasBeenSet = false;

    bool m_nfc;
    bool m_nfcHasBeenSet = false;

    bool m_gps;
    bool m_gpsHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
