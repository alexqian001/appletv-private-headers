/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NSString, NSMutableDictionary, Netflix, NSDictionary, NSMutableArray;

@interface NetflixDevice : NetflixNrdObject <NetflixNrdObjectProtocol> {
	Netflix *netflix_;	// 4 = 0x4
}
@property(readonly, assign) NSString *ESN;	// G=0x564205; 
@property(readonly, assign) NSString *ESNPrefix;	// G=0x56418d; 
@property(readonly, assign) unsigned PC_NATIVE;	// G=0x565139; 
@property(readonly, assign) unsigned PC_NONE;	// G=0x565131; 
@property(readonly, assign) unsigned PC_PIN;	// G=0x565135; 
@property(readonly, assign) NSMutableDictionary *SDKVersion;	// G=0x56427d; 
@property(copy) NSMutableArray *UILanguages;	// G=0x5653c5; S=0x56543d; 
@property(readonly, assign) NSDictionary *capability;	// G=0x56521d; 
@property(readonly, assign) unsigned certificationVersion;	// G=0x564125; 
@property(readonly, assign) BOOL isScreenSaverOn;	// G=0x56530d; 
@property(readonly, assign) NSString *language;	// G=0x5650b9; 
@property(retain) Netflix *netflix;	// G=0x565891; S=0x5658a5; @synthesize=netflix_
@property(readonly, assign) unsigned parentalControlOverrideType;	// G=0x5651b5; 
@property(readonly, assign) NSString *parentalControlRating;	// G=0x56513d; 
@property(readonly, assign) NSString *softwareVersion;	// G=0x5640ad; 
@property(readonly, assign) NSDictionary *videoOutput;	// G=0x565295; 
+ (id)sharedInstance;	// 0x563fc1
// declared property getter: - (id)ESN;	// 0x564205
// declared property getter: - (id)ESNPrefix;	// 0x56418d
// declared property getter: - (unsigned)PC_NATIVE;	// 0x565139
// declared property getter: - (unsigned)PC_NONE;	// 0x565131
// declared property getter: - (unsigned)PC_PIN;	// 0x565135
// declared property getter: - (id)SDKVersion;	// 0x56427d
// declared property getter: - (id)UILanguages;	// 0x5653c5
- (void)addEventListener:(id)listener name:(id)name;	// 0x565801
// declared property getter: - (id)capability;	// 0x56521d
// declared property getter: - (unsigned)certificationVersion;	// 0x564125
// declared property getter: - (BOOL)isScreenSaverOn;	// 0x56530d
// declared property getter: - (id)language;	// 0x5650b9
// declared property getter: - (id)netflix;	// 0x565891
// declared property getter: - (unsigned)parentalControlOverrideType;	// 0x5651b5
// declared property getter: - (id)parentalControlRating;	// 0x56513d
- (void)removeEventListener:(id)listener name:(id)name;	// 0x565849
// declared property setter: - (void)setNetflix:(id)netflix;	// 0x5658a5
// declared property setter: - (void)setUILanguages:(id)languages;	// 0x56543d
- (void)setUIVersion:(id)version;	// 0x565375
// declared property getter: - (id)softwareVersion;	// 0x5640ad
- (void)updateProperty:(id)property value:(id)value;	// 0x56559d
// declared property getter: - (id)videoOutput;	// 0x565295
@end
