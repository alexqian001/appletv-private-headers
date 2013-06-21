/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library


@interface IMLogging : NSObject {
}
+ (id)dateFormatter;	// 0x341bcc95
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x341bd369
+ (void)logAtLevel:(int)level type:(id)type category:(id)category format:(id)format;	// 0x341bc9e9
+ (void)logAtLevel:(int)level type:(id)type category:(id)category format:(id)format arguments:(void *)arguments;	// 0x341bca61
+ (void)logAtLevel:(int)level type:(id)type category:(id)category insertProcessInfo:(BOOL)info format:(id)format;	// 0x341bca25
+ (void)logAtLevel:(int)level type:(id)type category:(id)category insertProcessInfo:(BOOL)info format:(id)format arguments:(void *)arguments;	// 0x341bca99
+ (id)logFileDirectory;	// 0x341bcc21
+ (void)logString:(id)string toFolder:(id)folder toFileNamed:(id)fileNamed;	// 0x341bcee5
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x341bc915
+ (id)stringForDate;	// 0x341bc919
+ (id)timeFormatter;	// 0x341bcdbd
@end
