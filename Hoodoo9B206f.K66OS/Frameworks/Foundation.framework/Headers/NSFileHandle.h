/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSFileHandle : NSObject {
}
@property(retain) id readabilityHandler;	// G=0x31d53a4d; S=0x31d53a71; converted property
@property(retain) id writeabilityHandler;	// G=0x31d53a05; S=0x31d53a29; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x31d3041d
+ (id)fileHandleForReadingAtPath:(id)path;	// 0x31d303d5
+ (id)fileHandleForReadingFromURL:(id)url error:(id *)error;	// 0x31d536d5
+ (id)fileHandleForUpdatingAtPath:(id)path;	// 0x31d5368d
+ (id)fileHandleForUpdatingURL:(id)updatingURL error:(id *)error;	// 0x31d537e5
+ (id)fileHandleForWritingAtPath:(id)path;	// 0x31d30c55
+ (id)fileHandleForWritingToURL:(id)url error:(id *)error;	// 0x31d5375d
+ (id)fileHandleWithNullDevice;	// 0x31d535dd
+ (id)fileHandleWithStandardError;	// 0x31d53541
+ (id)fileHandleWithStandardInput;	// 0x31d53405
+ (id)fileHandleWithStandardOutput;	// 0x31d534a5
+ (void)initialize;	// 0x31d302dd
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;	// 0x31d53645
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id *)error;	// 0x31d53669
- (id)availableData;	// 0x31d5386d
- (void)closeFile;	// 0x31d539b9
- (int)fileDescriptor;	// 0x31d539dd
- (unsigned long long)offsetInFile;	// 0x31d538fd
- (id)readDataOfLength:(unsigned)length;	// 0x31d538b5
- (id)readDataToEndOfFile;	// 0x31d53891
// converted property getter: - (id)readabilityHandler;	// 0x31d53a4d
- (unsigned long long)seekToEndOfFile;	// 0x31d53925
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x31d5394d
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x31d53a71
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x31d53a29
- (void)synchronizeFile;	// 0x31d53995
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x31d53971
- (void)writeData:(id)data;	// 0x31d538d9
// converted property getter: - (id)writeabilityHandler;	// 0x31d53a05
@end

