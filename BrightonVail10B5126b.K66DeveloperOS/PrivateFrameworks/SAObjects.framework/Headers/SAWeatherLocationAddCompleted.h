/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *error;	// G=0x353da35d; S=0x353da379; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *weatherLocationId;	// G=0x353da3c9; S=0x353da445; 
+ (id)locationAddCompleted;	// 0x353da1d5
+ (id)locationAddCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353da219
+ (id)locationAddCompletedWithError:(id)error;	// 0x353da265
+ (id)locationAddCompletedWithWeatherLocationId:(id)weatherLocationId;	// 0x353da2ad
- (id)initWithError:(id)error;	// 0x353da2f5
- (id)initWithWeatherLocationId:(id)weatherLocationId;	// 0x353da329
- (id)encodedClassName;	// 0x353da1c9
// declared property getter: - (id)error;	// 0x353da35d
- (id)groupIdentifier;	// 0x353da1b9
// declared property setter: - (void)setError:(id)error;	// 0x353da379
// declared property setter: - (void)setWeatherLocationId:(id)anId;	// 0x353da445
// declared property getter: - (id)weatherLocationId;	// 0x353da3c9
@end

