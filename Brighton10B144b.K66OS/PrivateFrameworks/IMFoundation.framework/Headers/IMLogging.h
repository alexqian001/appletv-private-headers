/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library


@interface IMLogging : NSObject {
}
+ (id)dateFormatter;	// 0x341bac95
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x341bb369
+ (void)logAtLevel:(int)level type:(id)type category:(id)category format:(id)format;	// 0x341ba9e9
+ (void)logAtLevel:(int)level type:(id)type category:(id)category format:(id)format arguments:(void *)arguments;	// 0x341baa61
+ (void)logAtLevel:(int)level type:(id)type category:(id)category insertProcessInfo:(BOOL)info format:(id)format;	// 0x341baa25
+ (void)logAtLevel:(int)level type:(id)type category:(id)category insertProcessInfo:(BOOL)info format:(id)format arguments:(void *)arguments;	// 0x341baa99
+ (id)logFileDirectory;	// 0x341bac21
+ (void)logString:(id)string toFolder:(id)folder toFileNamed:(id)fileNamed;	// 0x341baee5
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x341ba915
+ (id)stringForDate;	// 0x341ba919
+ (id)timeFormatter;	// 0x341badbd
@end
