/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import "AXHearingAidSupport-Structs.h"
#import "CBPeripheralDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, AXHearingAidMode, AXTimer, NSString, NSArray, CBPeripheral;

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate> {
	float _leftVolume;	// 4 = 0x4
	float _rightVolume;	// 8 = 0x8
	float _leftMicrophoneVolume;	// 12 = 0xc
	float _rightMicrophoneVolume;	// 16 = 0x10
	float _leftStreamVolume;	// 20 = 0x14
	float _rightStreamVolume;	// 24 = 0x18
	BOOL _keepInSync;	// 28 = 0x1c
	BOOL _finishedLoading;	// 29 = 0x1d
	long initialLoadToken;	// 32 = 0x20
	AXTimer *_leftInvalidationTimer;	// 36 = 0x24
	AXTimer *_rightInvalidationTimer;	// 40 = 0x28
	AXTimer *_propertyWriteTimer;	// 44 = 0x2c
	BOOL _didLoseLeftPeripheral;	// 48 = 0x30
	BOOL _didLoseRightPeripheral;	// 49 = 0x31
	NSString *leftUUID;	// 52 = 0x34
	NSString *rightUUID;	// 56 = 0x38
	NSString *name;	// 60 = 0x3c
	NSString *manufacturer;	// 64 = 0x40
	NSString *model;	// 68 = 0x44
	NSString *leftFirmwareVersion;	// 72 = 0x48
	NSString *rightFirmwareVersion;	// 76 = 0x4c
	NSString *leftHardwareVersion;	// 80 = 0x50
	NSString *rightHardwareVersion;	// 84 = 0x54
	float rightBatteryLevel;	// 88 = 0x58
	float leftBatteryLevel;	// 92 = 0x5c
	NSArray *rightPrograms;	// 96 = 0x60
	NSArray *leftPrograms;	// 100 = 0x64
	AXHearingAidMode *currentRightProgram;	// 104 = 0x68
	AXHearingAidMode *currentLeftProgram;	// 108 = 0x6c
	CBPeripheral *leftPeripheral;	// 112 = 0x70
	CBPeripheral *rightPeripheral;	// 116 = 0x74
	BOOL isPaired;	// 120 = 0x78
	BOOL isConnecting;	// 121 = 0x79
	BOOL isPersistent;	// 122 = 0x7a
	int leftLoadedProperties;	// 124 = 0x7c
	int rightLoadedProperties;	// 128 = 0x80
	NSMutableDictionary *leftPropertiesLoadCount;	// 132 = 0x84
	NSMutableDictionary *rightPropertiesLoadCount;	// 136 = 0x88
	NSString *leftPeripheralUUID;	// 140 = 0x8c
	NSString *rightPeripheralUUID;	// 144 = 0x90
	int leftWriteRequestProperties;	// 148 = 0x94
	int rightWriteRequestProperties;	// 152 = 0x98
	CGImageRef _devicePhoto;	// 156 = 0x9c
}
@property(assign, nonatomic) AXHearingAidMode *currentLeftProgram;	// G=0x3336429d; S=0x333642ad; @synthesize
@property(assign, nonatomic) AXHearingAidMode *currentRightProgram;	// G=0x3336427d; S=0x3336428d; @synthesize
@property(assign, nonatomic) CGImageRef devicePhoto;	// G=0x333644cd; S=0x333644dd; @synthesize=_devicePhoto
@property(assign, nonatomic) BOOL isConnecting;	// G=0x3336431d; S=0x3336432d; @synthesize
@property(assign, nonatomic) BOOL isPaired;	// G=0x333642fd; S=0x3336430d; @synthesize
@property(assign, nonatomic) BOOL isPersistent;	// G=0x3336433d; S=0x3336434d; @synthesize
@property(assign, nonatomic) BOOL keepInSync;	// G=0x333643bd; S=0x3335e17d; @synthesize=_keepInSync
@property(assign, nonatomic) float leftBatteryLevel;	// G=0x33364215; S=0x33364225; @synthesize
@property(retain, nonatomic) NSString *leftFirmwareVersion;	// G=0x33364175; S=0x33364185; @synthesize
@property(retain, nonatomic) NSString *leftHardwareVersion;	// G=0x333641b5; S=0x333641c5; @synthesize
@property(assign, nonatomic) int leftLoadedProperties;	// G=0x333643cd; S=0x333643dd; @synthesize
@property(assign, nonatomic) float leftMicrophoneVolume;	// G=0x3336438d; S=0x333603cd; @synthesize=_leftMicrophoneVolume
@property(retain, nonatomic) CBPeripheral *leftPeripheral;	// G=0x333642bd; S=0x333642cd; @synthesize
@property(retain, nonatomic) NSString *leftPeripheralUUID;	// G=0x3336444d; S=0x3336445d; @synthesize
@property(copy, nonatomic) NSArray *leftPrograms;	// G=0x33364259; S=0x3336426d; @synthesize
@property(retain, nonatomic) NSMutableDictionary *leftPropertiesLoadCount;	// G=0x3336440d; S=0x3336441d; @synthesize
@property(retain) id leftSelectedProgram;	// G=0x3335fe95; S=0x33360019; converted property
@property(assign, nonatomic) float leftStreamVolume;	// G=0x333643ad; S=0x333604f5; @synthesize=_leftStreamVolume
@property(retain, nonatomic) NSString *leftUUID;	// G=0x333640d5; S=0x333640e5; @synthesize
@property(assign, nonatomic) float leftVolume;	// G=0x3336436d; S=0x333603ad; @synthesize=_leftVolume
@property(assign, nonatomic) int leftWriteRequestProperties;	// G=0x3336448d; S=0x3336449d; @synthesize
@property(retain, nonatomic) NSString *manufacturer;	// G=0x33364135; S=0x33364145; @synthesize
@property(retain, nonatomic) NSString *model;	// G=0x33364155; S=0x33364165; @synthesize
@property(retain, nonatomic) NSString *name;	// G=0x33364115; S=0x33364125; @synthesize
@property(assign, nonatomic) float rightBatteryLevel;	// G=0x333641f5; S=0x33364205; @synthesize
@property(retain, nonatomic) NSString *rightFirmwareVersion;	// G=0x33364195; S=0x333641a5; @synthesize
@property(retain, nonatomic) NSString *rightHardwareVersion;	// G=0x333641d5; S=0x333641e5; @synthesize
@property(assign, nonatomic) int rightLoadedProperties;	// G=0x333643ed; S=0x333643fd; @synthesize
@property(assign, nonatomic) float rightMicrophoneVolume;	// G=0x3336437d; S=0x33360461; @synthesize=_rightMicrophoneVolume
@property(retain, nonatomic) CBPeripheral *rightPeripheral;	// G=0x333642dd; S=0x333642ed; @synthesize
@property(retain, nonatomic) NSString *rightPeripheralUUID;	// G=0x3336446d; S=0x3336447d; @synthesize
@property(copy, nonatomic) NSArray *rightPrograms;	// G=0x33364235; S=0x33364249; @synthesize
@property(retain, nonatomic) NSMutableDictionary *rightPropertiesLoadCount;	// G=0x3336442d; S=0x3336443d; @synthesize
@property(retain) id rightSelectedProgram;	// G=0x33360121; S=0x333602a5; converted property
@property(assign, nonatomic) float rightStreamVolume;	// G=0x3336439d; S=0x33360571; @synthesize=_rightStreamVolume
@property(retain, nonatomic) NSString *rightUUID;	// G=0x333640f5; S=0x33364105; @synthesize
@property(assign, nonatomic) float rightVolume;	// G=0x3336435d; S=0x333603bd; @synthesize=_rightVolume
@property(assign, nonatomic) int rightWriteRequestProperties;	// G=0x333644ad; S=0x333644bd; @synthesize
+ (id)characteristicsUUIDs;	// 0x3335bc99
- (id)initWithPeripheral:(id)peripheral;	// 0x3335c121
- (id)initWithPersistentRepresentation:(id)persistentRepresentation;	// 0x3335c369
- (void)_init;	// 0x3335bfc9
- (void)_sendDelayedWrites;	// 0x3335f731
- (BOOL)addPeripheral:(id)peripheral;	// 0x333638fd
- (void)connect;	// 0x3335c769
- (void)connectionDidChange;	// 0x3335c8ed
- (BOOL)containsPeripheralWithUUID:(id)uuid;	// 0x3335cb0d
// declared property getter: - (id)currentLeftProgram;	// 0x3336429d
// declared property getter: - (id)currentRightProgram;	// 0x3336427d
- (void)dealloc;	// 0x3335c5d5
- (void)delayWriteProperty:(int)property forPeripheral:(id)peripheral;	// 0x3335fa31
- (id)description;	// 0x33363785
// declared property getter: - (CGImageRef)devicePhoto;	// 0x333644cd
- (void)didCommunicateWithPeripheral:(id)peripheral;	// 0x33363dd9
- (BOOL)didLoadBasicProperties;	// 0x3335cca5
- (BOOL)didLoadRequiredProperties;	// 0x3335cd5d
- (void)disconnect;	// 0x3335c82d
- (BOOL)isConnected;	// 0x3335d949
// declared property getter: - (BOOL)isConnecting;	// 0x3336431d
// declared property getter: - (BOOL)isPaired;	// 0x333642fd
// declared property getter: - (BOOL)isPersistent;	// 0x3336433d
// declared property getter: - (BOOL)keepInSync;	// 0x333643bd
- (BOOL)leftAvailable;	// 0x3335d911
// declared property getter: - (float)leftBatteryLevel;	// 0x33364215
// declared property getter: - (id)leftFirmwareVersion;	// 0x33364175
// declared property getter: - (id)leftHardwareVersion;	// 0x333641b5
// declared property getter: - (int)leftLoadedProperties;	// 0x333643cd
// declared property getter: - (float)leftMicrophoneVolume;	// 0x3336438d
// declared property getter: - (id)leftPeripheral;	// 0x333642bd
// declared property getter: - (id)leftPeripheralUUID;	// 0x3336444d
// declared property getter: - (id)leftPrograms;	// 0x33364259
// declared property getter: - (id)leftPropertiesLoadCount;	// 0x3336440d
// converted property getter: - (id)leftSelectedProgram;	// 0x3335fe95
// declared property getter: - (float)leftStreamVolume;	// 0x333643ad
// declared property getter: - (id)leftUUID;	// 0x333640d5
// declared property getter: - (float)leftVolume;	// 0x3336436d
// declared property getter: - (int)leftWriteRequestProperties;	// 0x3336448d
- (void)loadBasicProperties;	// 0x3335ed2d
- (void)loadFailedProperties;	// 0x3335f22d
- (void)loadProperties:(int)properties forPeripheral:(id)peripheral withRetryPeriod:(float)retryPeriod;	// 0x3335e67d
- (void)loadRequiredProperties;	// 0x3335edad
- (void)logCharacteristic:(id)characteristic andPeripheral:(id)peripheral;	// 0x33363611
// declared property getter: - (id)manufacturer;	// 0x33364135
- (void)mateWithDevice:(id)device;	// 0x3335d38d
// declared property getter: - (id)model;	// 0x33364155
// declared property getter: - (id)name;	// 0x33364115
- (id)peripheral:(id)peripheral characteristicForProperty:(int)property;	// 0x3335dc89
- (void)peripheral:(id)peripheral didDiscoverCharacteristicsForService:(id)service error:(id)error;	// 0x33360d61
- (void)peripheral:(id)peripheral didDiscoverServices:(id)services;	// 0x33360641
- (BOOL)peripheral:(id)peripheral didLoadProperty:(int)property;	// 0x3335cc59
- (void)peripheral:(id)peripheral didUpdateCharacteristic:(id)characteristic;	// 0x333614a5
- (void)peripheral:(id)peripheral didUpdateValueForCharacteristic:(id)characteristic error:(id)error;	// 0x33361311
- (void)peripheral:(id)peripheral didWriteValueForCharacteristic:(id)characteristic error:(id)error;	// 0x33363671
- (int)peripheral:(id)peripheral propertyForCharacteristic:(id)characteristic;	// 0x3335daad
- (void)peripheralDidInvalidateServices:(id)peripheral;	// 0x333635d9
- (void)peripheralDidUpdateName:(id)peripheral;	// 0x333605ed
- (BOOL)peripheralsStillAvailable;	// 0x3336401d
- (id)persistentRepresentation;	// 0x33363b2d
- (id)programs;	// 0x3335d9d5
- (void)reload;	// 0x3335ebc1
- (void)reloadPropertiesForPeripheral:(id)peripheral withLoadCount:(id)loadCount;	// 0x3335e39d
- (BOOL)rightAvailable;	// 0x3335d92d
// declared property getter: - (float)rightBatteryLevel;	// 0x333641f5
// declared property getter: - (id)rightFirmwareVersion;	// 0x33364195
// declared property getter: - (id)rightHardwareVersion;	// 0x333641d5
// declared property getter: - (int)rightLoadedProperties;	// 0x333643ed
// declared property getter: - (float)rightMicrophoneVolume;	// 0x3336437d
// declared property getter: - (id)rightPeripheral;	// 0x333642dd
// declared property getter: - (id)rightPeripheralUUID;	// 0x3336446d
// declared property getter: - (id)rightPrograms;	// 0x33364235
// declared property getter: - (id)rightPropertiesLoadCount;	// 0x3336442d
// converted property getter: - (id)rightSelectedProgram;	// 0x33360121
// declared property getter: - (float)rightStreamVolume;	// 0x3336439d
// declared property getter: - (id)rightUUID;	// 0x333640f5
// declared property getter: - (float)rightVolume;	// 0x3336435d
// declared property getter: - (int)rightWriteRequestProperties;	// 0x333644ad
- (id)rssi;	// 0x3335cb71
- (void)selectProgram:(id)program;	// 0x3335fbad
- (id)selectedProgramIndexes;	// 0x3335fe45
- (id)selectedPrograms;	// 0x3335fd55
// declared property setter: - (void)setCurrentLeftProgram:(id)program;	// 0x333642ad
// declared property setter: - (void)setCurrentRightProgram:(id)program;	// 0x3336428d
// declared property setter: - (void)setDevicePhoto:(CGImageRef)photo;	// 0x333644dd
// declared property setter: - (void)setIsConnecting:(BOOL)connecting;	// 0x3336432d
// declared property setter: - (void)setIsPaired:(BOOL)paired;	// 0x3336430d
// declared property setter: - (void)setIsPersistent:(BOOL)persistent;	// 0x3336434d
// declared property setter: - (void)setKeepInSync:(BOOL)sync;	// 0x3335e17d
// declared property setter: - (void)setLeftBatteryLevel:(float)level;	// 0x33364225
// declared property setter: - (void)setLeftFirmwareVersion:(id)version;	// 0x33364185
// declared property setter: - (void)setLeftHardwareVersion:(id)version;	// 0x333641c5
// declared property setter: - (void)setLeftLoadedProperties:(int)properties;	// 0x333643dd
// declared property setter: - (void)setLeftMicrophoneVolume:(float)volume;	// 0x333603cd
// declared property setter: - (void)setLeftPeripheral:(id)peripheral;	// 0x333642cd
// declared property setter: - (void)setLeftPeripheralUUID:(id)uuid;	// 0x3336445d
// declared property setter: - (void)setLeftPrograms:(id)programs;	// 0x3336426d
// declared property setter: - (void)setLeftPropertiesLoadCount:(id)count;	// 0x3336441d
// converted property setter: - (void)setLeftSelectedProgram:(id)program;	// 0x33360019
// declared property setter: - (void)setLeftStreamVolume:(float)volume;	// 0x333604f5
// declared property setter: - (void)setLeftUUID:(id)uuid;	// 0x333640e5
// declared property setter: - (void)setLeftVolume:(float)volume;	// 0x333603ad
// declared property setter: - (void)setLeftWriteRequestProperties:(int)properties;	// 0x3336449d
// declared property setter: - (void)setManufacturer:(id)manufacturer;	// 0x33364145
// declared property setter: - (void)setModel:(id)model;	// 0x33364165
// declared property setter: - (void)setName:(id)name;	// 0x33364125
- (void)setNotify:(BOOL)notify forPeripheral:(id)peripheral;	// 0x3335df75
// declared property setter: - (void)setRightBatteryLevel:(float)level;	// 0x33364205
// declared property setter: - (void)setRightFirmwareVersion:(id)version;	// 0x333641a5
// declared property setter: - (void)setRightHardwareVersion:(id)version;	// 0x333641e5
// declared property setter: - (void)setRightLoadedProperties:(int)properties;	// 0x333643fd
// declared property setter: - (void)setRightMicrophoneVolume:(float)volume;	// 0x33360461
// declared property setter: - (void)setRightPeripheral:(id)peripheral;	// 0x333642ed
// declared property setter: - (void)setRightPeripheralUUID:(id)uuid;	// 0x3336447d
// declared property setter: - (void)setRightPrograms:(id)programs;	// 0x33364249
// declared property setter: - (void)setRightPropertiesLoadCount:(id)count;	// 0x3336443d
// converted property setter: - (void)setRightSelectedProgram:(id)program;	// 0x333602a5
// declared property setter: - (void)setRightStreamVolume:(float)volume;	// 0x33360571
// declared property setter: - (void)setRightUUID:(id)uuid;	// 0x33364105
// declared property setter: - (void)setRightVolume:(float)volume;	// 0x333603bd
// declared property setter: - (void)setRightWriteRequestProperties:(int)properties;	// 0x333644bd
- (unsigned char)volumeValueForProperty:(int)property andPeripheral:(id)peripheral;	// 0x3335f991
- (void)writeInt:(unsigned char)int toPeripheral:(id)peripheral forProperty:(int)property;	// 0x3335fb41
- (void)writeVolume:(float)volume toPeripheral:(id)peripheral forProperty:(int)property;	// 0x3335fb2d
@end

