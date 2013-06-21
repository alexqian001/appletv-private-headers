/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString;
@protocol RTFCPZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface RTFCPZArchive : NSObject {
	NSMutableDictionary *mEntries;	// 4 = 0x4
	id<RTFCPZArchiveInputStream> mInput;	// 8 = 0x8
	NSString *mRootName;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x32a292b1
- (void)dealloc;	// 0x32a29429
- (id)entryWithName:(id)name;	// 0x32a294a1
- (RTFCPZEndOfCentralDirectory)readEndOfCentralDirectory;	// 0x32a29819
- (void)readEntries;	// 0x32a294d1
- (id)readFilenameFromBuffer:(const char *)buffer size:(unsigned long)size;	// 0x32a29a65
- (id)rootName;	// 0x32a294c1
- (const char *)searchForEndOfCentralDirectory;	// 0x32a298ed
@end
