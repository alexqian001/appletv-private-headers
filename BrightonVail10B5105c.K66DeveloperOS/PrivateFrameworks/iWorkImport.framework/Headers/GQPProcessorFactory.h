/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQPProcessorFactory : NSObject {
}
+ (int)applicationForDocumentUti:(CFStringRef)documentUti;	// 0x32d0fdfd
+ (CFStringRef)createUtiForDocument:(CFStringRef)document;	// 0x32d0fd69
+ (BOOL)isTangierDocumentUti:(CFStringRef)uti;	// 0x32d0fba9
+ (CFURLRef)newEmbeddedSageUrlForTangierDocumentUrl:(CFURLRef)tangierDocumentUrl uti:(CFStringRef)uti isBundle:(BOOL *)bundle;	// 0x32d0fbe5
+ (id)retainedProcessorForDocument:(CFStringRef)document zipArchive:(id)archive uti:(CFStringRef)uti outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper cryptoKey:(id)key;	// 0x32d0ff7d
+ (id)retainedProcessorForZipArchive:(id)zipArchive uti:(CFStringRef)uti outputType:(int)type outputPath:(CFStringRef)path previewRequest:(QLPreviewRequestRef)request progressiveHelper:(id)helper;	// 0x32d100f9
@end
