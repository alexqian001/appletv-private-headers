/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface UIDevice : NSObject {
@private
	int _numDeviceOrientationObservers;	// 4 = 0x4
	float _batteryLevel;	// 8 = 0x8
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned expectsFaceContactInLandscape : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
	} _deviceFlags;	// 12 = 0xc
}
@property(assign, nonatomic, setter=_setBacklightLevel:) float _backlightLevel;	// G=0x30283e55; S=0x30283e41; 
@property(readonly, assign, nonatomic) float batteryLevel;	// G=0x30283c8d; 
@property(assign, nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;	// G=0x30283c79; S=0x301d56a1; 
@property(readonly, assign, nonatomic) int batteryState;	// G=0x301d5b55; 
@property(readonly, assign, nonatomic) NSString *buildVersion;	// G=0x300582a5; 
@property(readonly, assign, nonatomic, getter=isGeneratingDeviceOrientationNotifications) BOOL generatesDeviceOrientationNotifications;	// G=0x3006ea95; 
@property(assign) BOOL isWildcat;	// G=0x3004da35; S=0x30283f8d; converted property
@property(readonly, assign, nonatomic) NSString *localizedModel;	// G=0x30283b6d; 
@property(readonly, assign, nonatomic) NSString *model;	// G=0x300fd3dd; 
@property(readonly, assign, nonatomic, getter=isMultitaskingSupported) BOOL multitaskingSupported;	// G=0x300ee13d; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x30283b39; 
@property(readonly, assign, nonatomic) int orientation;	// G=0x3005580d; 
@property(assign, nonatomic) int orientation;	// S=0x3006dfd5; 
@property(assign, nonatomic, getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;	// G=0x30283cc1; S=0x30283cd5; 
@property(readonly, assign, nonatomic) BOOL proximityState;	// G=0x30283dd5; 
@property(readonly, assign, nonatomic) NSString *systemName;	// G=0x30283bd1; 
@property(readonly, assign, nonatomic) NSString *systemVersion;	// G=0x30283c29; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x30283c5d; 
@property(readonly, assign, nonatomic) int userInterfaceIdiom;	// G=0x3002a301; 
+ (id)currentDevice;	// 0x3002a295
+ (int)currentDeviceOrientationAllowingAmbiguous:(BOOL)ambiguous;	// 0x3006df4d
+ (id)modelSpecificLocalizedStringKeyForKey:(id)key;	// 0x30189f7d
// declared property getter: - (float)_backlightLevel;	// 0x30283e55
- (void)_enableDeviceOrientationEvents:(BOOL)events;	// 0x3006df05
- (BOOL)_isTTYEnabled;	// 0x30283f21
- (void)_playSystemSound:(unsigned long)sound;	// 0x3013a4c1
- (void)_registerForSystemSounds:(id)systemSounds;	// 0x30125291
// declared property setter: - (void)_setBacklightLevel:(float)level;	// 0x30283e41
- (void)_setBatteryLevel:(float)level;	// 0x301d5b69
- (void)_setBatteryState:(int)state;	// 0x301d5ebd
- (void)_setExpectsFaceContactInLandscape:(BOOL)landscape;	// 0x30283d61
- (void)_setProximityState:(BOOL)state;	// 0x30283ead
- (float)_softwareDimmingAlpha;	// 0x30283e71
- (void)_unregisterForSystemSounds:(id)systemSounds;	// 0x300ba0dd
- (void)_updateSystemSoundActiveStatus:(id)status;	// 0x3016c135
// declared property getter: - (float)batteryLevel;	// 0x30283c8d
// declared property getter: - (int)batteryState;	// 0x301d5b55
- (void)beginGeneratingDeviceOrientationNotifications;	// 0x3006de99
// declared property getter: - (id)buildVersion;	// 0x300582a5
- (id)deviceInfoForKey:(CFStringRef)key;	// 0x300582d9
- (void)endGeneratingDeviceOrientationNotifications;	// 0x300ed631
// declared property getter: - (BOOL)isBatteryMonitoringEnabled;	// 0x30283c79
// declared property getter: - (BOOL)isGeneratingDeviceOrientationNotifications;	// 0x3006ea95
// declared property getter: - (BOOL)isMultitaskingSupported;	// 0x300ee13d
// declared property getter: - (BOOL)isProximityMonitoringEnabled;	// 0x30283cc1
// converted property getter: - (BOOL)isWildcat;	// 0x3004da35
// declared property getter: - (id)localizedModel;	// 0x30283b6d
// declared property getter: - (id)model;	// 0x300fd3dd
// declared property getter: - (id)name;	// 0x30283b39
// declared property getter: - (int)orientation;	// 0x3005580d
- (void)playInputClick;	// 0x30283ded
// declared property getter: - (BOOL)proximityState;	// 0x30283dd5
// declared property setter: - (void)setBatteryMonitoringEnabled:(BOOL)enabled;	// 0x301d56a1
// converted property setter: - (void)setIsWildcat:(BOOL)wildcat;	// 0x30283f8d
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x3006dfd5
- (void)setOrientation:(int)orientation animated:(BOOL)animated;	// 0x3002fb39
// declared property setter: - (void)setProximityMonitoringEnabled:(BOOL)enabled;	// 0x30283cd5
// declared property getter: - (id)systemName;	// 0x30283bd1
// declared property getter: - (id)systemVersion;	// 0x30283c29
// declared property getter: - (id)uniqueIdentifier;	// 0x30283c5d
// declared property getter: - (int)userInterfaceIdiom;	// 0x3002a301
@end

