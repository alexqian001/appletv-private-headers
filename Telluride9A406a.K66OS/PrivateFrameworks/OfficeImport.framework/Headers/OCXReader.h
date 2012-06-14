/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OCDReader.h"

@class OCPZipPackage;

__attribute__((visibility("hidden")))
@interface OCXReader : NSObject <OCDReader> {
@private
	OCPZipPackage *mZipPackage;	// 4 = 0x4
}
+ (id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32ae66b9
+ (id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x32ae66b5
+ (id)readerWithZipPackage:(id)zipPackage;	// 0x329a2f0d
- (id)initWithZipPackage:(id)zipPackage;	// 0x329a2f59
- (void)dealloc;	// 0x329bd529
- (bool)isBinaryReader;	// 0x32ae66a1
- (id)zipPackage;	// 0x32ae66a5
@end
