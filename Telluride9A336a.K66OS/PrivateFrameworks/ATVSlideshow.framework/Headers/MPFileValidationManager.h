/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library


@interface MPFileValidationManager : NSObject {
}
+ (void)releaseSharedManager;	// 0x342be309
+ (id)sharedManager;	// 0x342be2bd
- (void)checkFileExtension:(id)extension isAudio:(BOOL *)audio isImage:(BOOL *)image isVideo:(BOOL *)video;	// 0x342be4f1
- (id)resolveAliasPath:(id)path;	// 0x342be859
- (id)resolveAliasPath:(id)path isAlias:(BOOL *)alias;	// 0x342be86d
- (BOOL)validateFiles:(id)files allowAudio:(BOOL)audio allowImages:(BOOL)images allowMovies:(BOOL)movies extensionsOnly:(BOOL)only;	// 0x342be3b5
- (BOOL)validateFilesForAudio:(id)audio extensionsOnly:(BOOL)only;	// 0x342be335
- (BOOL)validateFilesForImages:(id)images extensionsOnly:(BOOL)only;	// 0x342be35d
- (BOOL)validateFilesForMovies:(id)movies extensionsOnly:(BOOL)only;	// 0x342be389
@end
