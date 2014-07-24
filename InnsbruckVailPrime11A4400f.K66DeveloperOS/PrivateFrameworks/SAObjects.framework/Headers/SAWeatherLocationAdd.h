/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainCommand.h"

@class SAWeatherLocation;

@interface SAWeatherLocationAdd : SADomainCommand {
}
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;	// G=0x326c1ed9; S=0x326c1f1d; 
+ (id)locationAdd;	// 0x326c1e49
+ (id)locationAddWithDictionary:(id)dictionary context:(id)context;	// 0x326c1e8d
- (id)encodedClassName;	// 0x326c1e3d
- (id)groupIdentifier;	// 0x326c1e2d
- (BOOL)requiresResponse;	// 0x326c1f59
// declared property setter: - (void)setWeatherLocation:(id)location;	// 0x326c1f1d
// declared property getter: - (id)weatherLocation;	// 0x326c1ed9
@end
