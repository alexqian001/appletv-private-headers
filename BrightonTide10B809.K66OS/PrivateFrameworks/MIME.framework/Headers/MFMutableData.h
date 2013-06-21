/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "MIME-Structs.h"
#import <NSMutableData.h> // Unknown library


@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
	void *_bytes;	// 4 = 0x4
	unsigned _length;	// 8 = 0x8
	unsigned _mappedLength;	// 12 = 0xc
	unsigned _capacity;	// 16 = 0x10
	unsigned _threshold;	// 20 = 0x14
	char *_path;	// 24 = 0x18
	int _fd;	// 28 = 0x1c
	unsigned _flushFrom;	// 32 = 0x20
	BOOL _flush;	// 36 = 0x24
	BOOL _immutable;	// 37 = 0x25
	BOOL _vm;	// 38 = 0x26
}
@property(assign) unsigned length;	// G=0x3440a9b5; S=0x3440acb9; converted property
- (id)init;	// 0x3440a339
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x3440a34d
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x3440a62d
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3440a63d
- (id)initWithCapacity:(unsigned)capacity;	// 0x3440a7f5
- (id)initWithContentsOfFile:(id)file;	// 0x3440a78d
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3440a70d
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x3440a6ed
- (id)initWithContentsOfURL:(id)url;	// 0x3440a6cd
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3440a669
- (id)initWithData:(id)data;	// 0x3440a7ad
- (id)initWithLength:(unsigned)length;	// 0x3440a859
- (void)_flushToDisk:(unsigned)disk capacity:(unsigned)capacity;	// 0x3440b2e9
- (id)_initWithFd:(int)fd path:(id)path mutable:(BOOL)aMutable;	// 0x3440a585
- (void)_mapMutableData:(BOOL)data;	// 0x3440b519
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x3440aaf5
- (void)appendData:(id)data;	// 0x3440abcd
- (const void *)bytes;	// 0x3440a9c5
- (id)copyWithZone:(NSZone *)zone;	// 0x3440a8a1
- (void)dealloc;	// 0x3440a91d
// converted property getter: - (unsigned)length;	// 0x3440a9b5
- (BOOL)mf_immutable;	// 0x3440b681
- (void)mf_makeImmutable;	// 0x3440afd5
- (void *)mutableBytes;	// 0x3440aa29
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3440a8d9
// converted property setter: - (void)setLength:(unsigned)length;	// 0x3440acb9
- (void)setMappingThreshold:(unsigned)threshold;	// 0x3440af79
- (id)subdataWithRange:(NSRange)range;	// 0x3440ac15
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x3440b049
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x3440b0a1
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x3440b075
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3440b25d
@end
