/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainCommand.h"

@class NSURL, NSString;

@interface SAWeatherLocationSearch : SADomainCommand {
}
@property(copy, nonatomic) NSURL *identifier;	// G=0x326c24d1; S=0x326c254d; 
@property(copy, nonatomic) NSString *locationId;	// G=0x326c25ad; S=0x326c25c9; 
+ (id)locationSearch;	// 0x326c2441
+ (id)locationSearchWithDictionary:(id)dictionary context:(id)context;	// 0x326c2485
- (id)encodedClassName;	// 0x326c2435
- (id)groupIdentifier;	// 0x326c2425
// declared property getter: - (id)identifier;	// 0x326c24d1
// declared property getter: - (id)locationId;	// 0x326c25ad
- (BOOL)requiresResponse;	// 0x326c2619
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x326c254d
// declared property setter: - (void)setLocationId:(id)anId;	// 0x326c25c9
@end

