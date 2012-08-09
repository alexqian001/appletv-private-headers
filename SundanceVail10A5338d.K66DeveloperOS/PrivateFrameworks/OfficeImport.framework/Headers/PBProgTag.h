/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface PBProgTag : NSObject {
}
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0x3396c299
+ (id)binaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x3396c259
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTags:(id)progTags;	// 0x33bcdaa1
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)name inProgTagsParent:(id)progTagsParent;	// 0x33bcda4d
+ (void)readBulletImagesFromContainerParent:(id)containerParent state:(id)state;	// 0x33aaac05
+ (void)readBulletImagesFromDocumentList:(id)documentList state:(id)state;	// 0x3396c405
+ (id)readBulletStyleFromClientData:(id)clientData;	// 0x339bcf31
+ (void)readBulletStylesFromDocumentList:(id)documentList state:(id)state;	// 0x3396c181
+ (void)readBulletStylesFromMainMaster:(id)mainMaster state:(id)state;	// 0x339725b5
+ (void)readClientData:(id)data state:(id)state;	// 0x339bcedd
+ (void)readDocumentList:(id)list state:(id)state;	// 0x3396c11d
+ (void)readHyperlinkScreenTipsFromDocumentList:(id)documentList state:(id)state;	// 0x3396c525
+ (id)readMacCharStyleFromClientData:(id)clientData;	// 0x339bcf75
+ (void)readMacCharStylesFromDocumentList:(id)documentList state:(id)state;	// 0x3396c44d
+ (const PBTextFormatProgTagInfo *)textFormatInfoForProgTagName:(const unsigned short *)progTagName;	// 0x33bcda11
@end
