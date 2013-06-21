/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL;

@interface SAClockDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *clockIds;	// G=0x353caf59; S=0x353caff9; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353cae7d; S=0x353caef9; 
+ (id)delete;	// 0x353caded
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x353cae31
// declared property getter: - (id)clockIds;	// 0x353caf59
- (id)encodedClassName;	// 0x353cade1
- (id)groupIdentifier;	// 0x353cadd1
- (BOOL)requiresResponse;	// 0x353cb079
// declared property setter: - (void)setClockIds:(id)ids;	// 0x353caff9
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353caef9
// declared property getter: - (id)targetAppId;	// 0x353cae7d
@end
