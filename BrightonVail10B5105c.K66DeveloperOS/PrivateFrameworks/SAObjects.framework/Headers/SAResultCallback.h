/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSArray;

@interface SAResultCallback : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int code;	// G=0x303c674d; S=0x303c67bd; 
@property(copy, nonatomic) NSArray *commands;	// G=0x303c6801; S=0x303c6869; 
+ (id)resultCallback;	// 0x303c66bd
+ (id)resultCallbackWithDictionary:(id)dictionary context:(id)context;	// 0x303c6701
// declared property getter: - (int)code;	// 0x303c674d
// declared property getter: - (id)commands;	// 0x303c6801
- (id)encodedClassName;	// 0x303c66b1
- (id)groupIdentifier;	// 0x303c66a1
// declared property setter: - (void)setCode:(int)code;	// 0x303c67bd
// declared property setter: - (void)setCommands:(id)commands;	// 0x303c6869
@end
