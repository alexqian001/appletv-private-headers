/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WXCharacterProperties : NSObject {
}
+ (void)applyDeletionInsertionProperties:(id)properties state:(id)state;	// 0x32c5b959
+ (void)initialize;	// 0x32c54945
+ (int)languageFromString:(id)string;	// 0x32c55699
+ (BOOL)readBooleanCharacterProperty:(xmlNode *)property propertyName:(const char *)name attributeName:(const char *)name3 outValue:(int *)value;	// 0x32c55591
+ (void)readFrom:(xmlNode *)from to:(id)to state:(id)state;	// 0x32c54a19
@end

