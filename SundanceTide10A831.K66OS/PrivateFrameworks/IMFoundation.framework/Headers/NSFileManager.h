/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSFileManager.h> // Unknown library


@interface NSFileManager (FezAdditions)
- (id)_generateLinkForURL:(id)url;	// 0x32d4914d
- (BOOL)_isPathOnMissingVolume:(id)volume;	// 0x32d43a65
- (BOOL)_moveItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error asCopy:(BOOL)copy;	// 0x32d49631
- (id)_randomTemporaryPathWithFileName:(id)fileName;	// 0x32d49319
- (id)_randomTemporaryPathWithSuffix:(id)suffix;	// 0x32d492ad
- (id)_randomTemporaryPathWithSuffix:(id)suffix fileName:(id)name;	// 0x32d492c1
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error;	// 0x32d49791
- (id)createUniqueDirectoryWithName:(id)name atPath:(id)path ofType:(id)type;	// 0x32d4953d
- (BOOL)makeDirectoriesInPath:(id)path mode:(unsigned long)mode;	// 0x32d4398d
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 uniquePath:(id *)path3 error:(id *)error;	// 0x32d49765
- (id)uniqueFilename:(id)filename atPath:(id)path ofType:(id)type;	// 0x32d493bd
@end

