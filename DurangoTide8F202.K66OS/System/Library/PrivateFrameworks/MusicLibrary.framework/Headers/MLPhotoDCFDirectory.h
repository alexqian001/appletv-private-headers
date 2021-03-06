/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLPhotoDCFObject.h"
#import "MusicLibrary-Structs.h"

@class MLPhotoDCIMDirectory;

@interface MLPhotoDCFDirectory : MLPhotoDCFObject {
@private
	MLPhotoDCIMDirectory *_dcimDirectory;	// 12 = 0xc
	CFDictionaryRef _fileGroupsByNumber;	// 16 = 0x10
	int _maxFileGroupNumber;	// 20 = 0x14
	int _lastUsedFileGroupNumber;	// 24 = 0x18
	BOOL _considerInvalidFileGroups;	// 28 = 0x1c
}
@property(assign) BOOL considerInvalidFileGroups;	// G=0x3180ae81; S=0x3180ae91; @synthesize=_considerInvalidFileGroups
@property(readonly, retain) MLPhotoDCIMDirectory *dcimDirectory;	// G=0x3180ae4d; converted property
+ (id)fileGroupRequiredEmptyExtensions;	// 0x3180ae41
+ (id)fileGroupRequiredEmptyPrefixes;	// 0x3180ae35
+ (void)initializeFileGroupPrefixAndExtensions;	// 0x3180bcc9
- (id)initWithName:(id)name number:(int)number dcimDirectory:(id)directory;	// 0x3180b251
- (unsigned)_calculateBaseDirectoryValue;	// 0x3180ae5d
- (BOOL)_canAddItemWithPrefix:(id)prefix;	// 0x3180aff1
- (BOOL)_canAddItemWithPrefix:(id)prefix minimumFileGroupNumber:(int)number;	// 0x3180b09d
- (id)_lastUsedFileGroupUserInfoKey;	// 0x3180b219
- (id)_nextAvailableFileGroupWithPrefix:(id)prefix extension:(id)extension;	// 0x3180b56d
- (BOOL)canAddFileGroupWithGroupNumber:(int)groupNumber;	// 0x3180b329
- (BOOL)canAddImage;	// 0x3180afd1
- (BOOL)canAddVideo;	// 0x3180afb1
// declared property getter: - (BOOL)considerInvalidFileGroups;	// 0x3180ae81
// converted property getter: - (id)dcimDirectory;	// 0x3180ae4d
- (void)dealloc;	// 0x3180b2dd
- (void)ensureDirectoryExists;	// 0x3180b551
- (id)fileGroups;	// 0x3180b80d
- (id)fullPath;	// 0x3180af71
- (BOOL)isEntensionValid:(id)valid;	// 0x3180af29
- (id)nextAvailableFileGroup;	// 0x3180af05
- (id)nextAvailableVideoFileGroupWithExtension:(id)extension;	// 0x3180aee5
- (void)removeFileGroup:(id)group;	// 0x3180b7cd
// declared property setter: - (void)setConsiderInvalidFileGroups:(BOOL)groups;	// 0x3180ae91
- (void)setWriteIsPending:(BOOL)pending;	// 0x3180aea1
@end

