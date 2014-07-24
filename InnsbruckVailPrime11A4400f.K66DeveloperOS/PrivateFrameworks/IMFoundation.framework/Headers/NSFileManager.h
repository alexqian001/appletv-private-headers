/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSFileManager.h>


@interface NSFileManager (FezAdditions)
- (id)_generateLinkForURL:(id)url;	// 0x312081d5
- (BOOL)_isPathOnMissingVolume:(id)volume;	// 0x31202019
- (BOOL)_moveItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error asCopy:(BOOL)copy;	// 0x312086c9
- (id)_randomTemporaryPathWithFileName:(id)fileName;	// 0x312083a5
- (id)_randomTemporaryPathWithSuffix:(id)suffix;	// 0x31208339
- (id)_randomTemporaryPathWithSuffix:(id)suffix fileName:(id)name;	// 0x3120834d
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error;	// 0x31208825
- (id)createUniqueDirectoryWithName:(id)name atPath:(id)path ofType:(id)type;	// 0x312085cd
- (BOOL)makeDirectoriesInPath:(id)path mode:(unsigned)mode;	// 0x31201f41
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error;	// 0x312087f9
- (id)uniqueFilename:(id)filename atPath:(id)path ofType:(id)type;	// 0x31208449
@end
