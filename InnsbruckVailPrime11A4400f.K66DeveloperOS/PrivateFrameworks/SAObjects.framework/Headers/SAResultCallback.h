/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSArray;

@interface SAResultCallback : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int code;	// G=0x326f3c79; S=0x326f3ce9; 
@property(copy, nonatomic) NSArray *commands;	// G=0x326f3d2d; S=0x326f3d85; 
+ (id)resultCallback;	// 0x326f3be9
+ (id)resultCallbackWithDictionary:(id)dictionary context:(id)context;	// 0x326f3c2d
// declared property getter: - (int)code;	// 0x326f3c79
// declared property getter: - (id)commands;	// 0x326f3d2d
- (id)encodedClassName;	// 0x326f3bdd
- (id)groupIdentifier;	// 0x326f3bcd
// declared property setter: - (void)setCode:(int)code;	// 0x326f3ce9
// declared property setter: - (void)setCommands:(id)commands;	// 0x326f3d85
@end

