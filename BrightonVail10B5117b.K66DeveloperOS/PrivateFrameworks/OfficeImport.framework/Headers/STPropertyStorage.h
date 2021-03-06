/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface STPropertyStorage : NSObject {
	SsrwPropertyStorage *m_pPropertyStorage;	// 4 = 0x4
}
- (id)initWithPropertyStorage:(SsrwPropertyStorage *)propertyStorage;	// 0x34c41f1d
- (void)close;	// 0x34c41f61
- (void)dealloc;	// 0x34c41f75
- (id)getDocumentPropertyWithId:(int)anId propType:(int *)type;	// 0x34c41fb5
- (id)getDocumentPropertyWithName:(id)name propType:(int *)type;	// 0x34c42251
- (long)getLongDocumentPropertyWithId:(int)anId;	// 0x34c42069
- (short)getShortDocumentPropertyWithId:(int)anId;	// 0x34c420a9
- (id)getStringDocumentPropertyWithId:(int)anId;	// 0x34c420e5
- (void)setBlobDocumentPropertyWithName:(id)name to:(id)to;	// 0x34c4248d
- (void)setDocumentPropertyWithId:(int)anId to:(id)to;	// 0x34c422a5
- (void)setLongDocumentPropertyWithId:(int)anId to:(long)to;	// 0x34c4230d
- (void)setShortDocumentPropertyWithId:(int)anId to:(short)to;	// 0x34c4238d
- (void)setStringDocumentPropertyWithId:(int)anId to:(id)to;	// 0x34c4240d
@end

