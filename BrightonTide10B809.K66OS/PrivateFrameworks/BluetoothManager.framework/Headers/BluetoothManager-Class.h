/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

#import "BluetoothManager-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface BluetoothManager : NSObject {
	BTLocalDeviceImplRef _localDevice;	// 4 = 0x4
	BTSessionImplRef _session;	// 8 = 0x8
	int _available;	// 12 = 0xc
	BOOL _audioConnected;	// 16 = 0x10
	BOOL _scanningEnabled;	// 17 = 0x11
	BOOL _scanningInProgress;	// 18 = 0x12
	unsigned _scanningServiceMask;	// 20 = 0x14
	BTDiscoveryAgentImplRef _discoveryAgent;	// 24 = 0x18
	BTPairingAgentImplRef _pairingAgent;	// 28 = 0x1c
	BTAccessoryManagerImplRef _accessoryManager;	// 32 = 0x20
	NSMutableDictionary *_btAddrDict;	// 36 = 0x24
	NSMutableDictionary *_btDeviceDict;	// 40 = 0x28
}
@property(assign) BOOL audioConnected;	// G=0x3351b90d; S=0x3351b91d; converted property
@property(assign) BOOL connectable;	// G=0x3351b4e9; S=0x3351b529; converted property
@property(assign) BOOL devicePairingEnabled;	// G=0x3351b0b9; S=0x3351b0d1; converted property
@property(assign) BOOL deviceScanningEnabled;	// G=0x3351ad95; S=0x3351aea5; converted property
@property(assign, getter=isDiscoverable) BOOL discoverable;	// G=0x3351affd; S=0x3351b03d; converted property
+ (int)lastInitError;	// 0x33519d09
+ (id)sharedInstance;	// 0x33519c99
- (id)init;	// 0x33519d31
- (BTAccessoryManagerImplRef)_accessoryManager;	// 0x33519c21
- (void)_advertisingChanged;	// 0x3351afe1
- (BOOL)_attach:(id)attach;	// 0x33519d95
- (void)_cleanup:(BOOL)cleanup;	// 0x3351a4dd
- (void)_connectabilityChanged;	// 0x3351b8f1
- (void)_connectedStatusChanged;	// 0x3351b8d5
- (void)_discoveryStateChanged;	// 0x3351afc5
- (BOOL)_onlySensorsConnected;	// 0x3351b7bd
- (void)_postNotification:(id)notification;	// 0x3351a779
- (void)_postNotificationWithArray:(id)array;	// 0x3351a691
- (void)_powerChanged;	// 0x3351a9c5
- (void)_removeDevice:(id)device;	// 0x3351ac35
- (void)_restartScan;	// 0x3351af35
- (void)_scanForServices:(unsigned)services withMode:(int)mode;	// 0x3351addd
- (void)_setScanState:(int)state;	// 0x3351afad
- (BOOL)_setup:(BTSessionImplRef)setup;	// 0x33519f09
- (void)acceptSSP:(int)ssp forDevice:(id)device;	// 0x3351b429
- (id)addDeviceIfNeeded:(BTDeviceImplRef)needed;	// 0x3351aac9
// converted property getter: - (BOOL)audioConnected;	// 0x3351b90d
- (BOOL)available;	// 0x33519d19
- (void)cancelPairing;	// 0x3351b1ad
- (void)connectDevice:(id)device;	// 0x3351b4d5
- (void)connectDevice:(id)device withServices:(unsigned)services;	// 0x3351b489
// converted property getter: - (BOOL)connectable;	// 0x3351b4e9
- (BOOL)connected;	// 0x3351b871
- (id)connectedDevices;	// 0x3351b795
- (id)connectedDevices:(BOOL)devices;	// 0x3351b679
- (id)connectedLEDevices;	// 0x3351b7a9
- (id)connectingDevices;	// 0x3351b581
- (void)dealloc;	// 0x3351a64d
// converted property getter: - (BOOL)devicePairingEnabled;	// 0x3351b0b9
// converted property getter: - (BOOL)deviceScanningEnabled;	// 0x3351ad95
- (BOOL)deviceScanningInProgress;	// 0x3351ada5
- (void)enableTestMode;	// 0x3351ba19
- (BOOL)enabled;	// 0x3351a915
- (void)endVoiceCommand:(id)command;	// 0x3351b985
- (BOOL)isAnyoneAdvertising;	// 0x3351aa89
- (BOOL)isAnyoneScanning;	// 0x3351aa49
// converted property getter: - (BOOL)isDiscoverable;	// 0x3351affd
- (BOOL)isServiceSupported:(unsigned)supported;	// 0x3351b9d1
- (id)pairedDevices;	// 0x3351b395
- (id)pairedDevices:(BOOL)devices;	// 0x3351b279
- (id)pairedLEDevices;	// 0x3351b3a9
- (void)postNotification:(id)notification;	// 0x3351a7b5
- (void)postNotificationName:(id)name object:(id)object;	// 0x3351a7e5
- (void)postNotificationName:(id)name object:(id)object error:(id)error;	// 0x3351a835
- (int)powerState;	// 0x3351a8b1
- (BOOL)powered;	// 0x3351a8f5
- (void)resetDeviceScanning;	// 0x3351adb5
- (void)scanForConnectableDevices:(unsigned)connectableDevices;	// 0x3351ae91
- (void)scanForServices:(unsigned)services;	// 0x3351ae7d
// converted property setter: - (void)setAudioConnected:(BOOL)connected;	// 0x3351b91d
// converted property setter: - (void)setConnectable:(BOOL)connectable;	// 0x3351b529
// converted property setter: - (void)setDevicePairingEnabled:(BOOL)enabled;	// 0x3351b0d1
// converted property setter: - (void)setDeviceScanningEnabled:(BOOL)enabled;	// 0x3351aea5
// converted property setter: - (void)setDiscoverable:(BOOL)discoverable;	// 0x3351b03d
- (BOOL)setEnabled:(BOOL)enabled;	// 0x3351a98d
- (void)setPincode:(id)pincode forDevice:(id)device;	// 0x3351b3bd
- (BOOL)setPowered:(BOOL)powered;	// 0x3351a92d
- (void)showPowerPrompt;	// 0x3351a899
- (void)startVoiceCommand:(id)command;	// 0x3351b939
- (void)unpairDevice:(id)device;	// 0x3351b1dd
- (BOOL)wasDeviceDiscovered:(id)discovered;	// 0x3351aced
@end
