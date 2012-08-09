/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSNumber, NSString, NSArray;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSArray *abSources;	// G=0x3662c7f9; S=0x3662c875; 
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *anchor;	// G=0x3662c8dd; S=0x3662c8f9; 
@property(assign, nonatomic) BOOL censorSpeech;	// G=0x3662c949; S=0x3662c9c1; 
@property(copy, nonatomic) NSString *countryCode;	// G=0x3662ca05; S=0x3662ca21; 
@property(copy, nonatomic) NSNumber *debugFlags;	// G=0x3662ca71; S=0x3662ca8d; 
@property(copy, nonatomic) NSArray *deviceCapabilities;	// G=0x3662cadd; S=0x3662caf9; 
@property(copy, nonatomic) NSString *deviceVersion;	// G=0x3662cb49; S=0x3662cb65; 
@property(copy, nonatomic) NSString *firstName;	// G=0x3662cbb5; S=0x3662cbd1; 
@property(assign, nonatomic) BOOL handsFree;	// G=0x3662cc21; S=0x3662cc99; 
@property(copy, nonatomic) NSString *lastName;	// G=0x3662ccdd; S=0x3662ccf9; 
@property(copy, nonatomic) NSArray *meCards;	// G=0x3662cd49; S=0x3662cdc5; 
@property(copy, nonatomic) NSString *osVersion;	// G=0x3662ce2d; S=0x3662ce49; 
@property(copy, nonatomic) NSArray *parentalRestrictions;	// G=0x3662ce99; S=0x3662ceb5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *region;	// G=0x3662cf05; S=0x3662cf21; 
@property(copy, nonatomic) NSNumber *storefront;	// G=0x3662cf71; S=0x3662cf8d; 
@property(copy, nonatomic) NSString *temperatureUnit;	// G=0x3662cfdd; S=0x3662cff9; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x3662d049; S=0x3662d065; 
@property(copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;	// G=0x3662d0b5; S=0x3662d0d1; 
@property(copy, nonatomic) NSNumber *uiScale;	// G=0x3662d121; S=0x3662d13d; 
+ (id)setAssistantData;	// 0x3662c769
+ (id)setAssistantDataWithDictionary:(id)dictionary context:(id)context;	// 0x3662c7ad
// declared property getter: - (id)abSources;	// 0x3662c7f9
// declared property getter: - (id)anchor;	// 0x3662c8dd
// declared property getter: - (BOOL)censorSpeech;	// 0x3662c949
// declared property getter: - (id)countryCode;	// 0x3662ca05
// declared property getter: - (id)debugFlags;	// 0x3662ca71
// declared property getter: - (id)deviceCapabilities;	// 0x3662cadd
// declared property getter: - (id)deviceVersion;	// 0x3662cb49
- (id)encodedClassName;	// 0x3662c75d
// declared property getter: - (id)firstName;	// 0x3662cbb5
- (id)groupIdentifier;	// 0x3662c74d
// declared property getter: - (BOOL)handsFree;	// 0x3662cc21
// declared property getter: - (id)lastName;	// 0x3662ccdd
// declared property getter: - (id)meCards;	// 0x3662cd49
// declared property getter: - (id)osVersion;	// 0x3662ce2d
// declared property getter: - (id)parentalRestrictions;	// 0x3662ce99
// declared property getter: - (id)region;	// 0x3662cf05
// declared property setter: - (void)setAbSources:(id)sources;	// 0x3662c875
// declared property setter: - (void)setAnchor:(id)anchor;	// 0x3662c8f9
// declared property setter: - (void)setCensorSpeech:(BOOL)speech;	// 0x3662c9c1
// declared property setter: - (void)setCountryCode:(id)code;	// 0x3662ca21
// declared property setter: - (void)setDebugFlags:(id)flags;	// 0x3662ca8d
// declared property setter: - (void)setDeviceCapabilities:(id)capabilities;	// 0x3662caf9
// declared property setter: - (void)setDeviceVersion:(id)version;	// 0x3662cb65
// declared property setter: - (void)setFirstName:(id)name;	// 0x3662cbd1
// declared property setter: - (void)setHandsFree:(BOOL)free;	// 0x3662cc99
// declared property setter: - (void)setLastName:(id)name;	// 0x3662ccf9
// declared property setter: - (void)setMeCards:(id)cards;	// 0x3662cdc5
// declared property setter: - (void)setOsVersion:(id)version;	// 0x3662ce49
// declared property setter: - (void)setParentalRestrictions:(id)restrictions;	// 0x3662ceb5
// declared property setter: - (void)setRegion:(id)region;	// 0x3662cf21
// declared property setter: - (void)setStorefront:(id)storefront;	// 0x3662cf8d
// declared property setter: - (void)setTemperatureUnit:(id)unit;	// 0x3662cff9
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x3662d065
// declared property setter: - (void)setTwentyFourHourTimeDisplay:(id)display;	// 0x3662d0d1
// declared property setter: - (void)setUiScale:(id)scale;	// 0x3662d13d
// declared property getter: - (id)storefront;	// 0x3662cf71
// declared property getter: - (id)temperatureUnit;	// 0x3662cfdd
// declared property getter: - (id)timeZoneId;	// 0x3662d049
// declared property getter: - (id)twentyFourHourTimeDisplay;	// 0x3662d0b5
// declared property getter: - (id)uiScale;	// 0x3662d121
@end
