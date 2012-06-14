/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMDocumentInfo;

@interface GMMKmlInfo : PBCodable {
	GMMDocumentInfo *_sourceDocument;	// 4 = 0x4
	BOOL _hasIsUserCreated;	// 8 = 0x8
	BOOL _isUserCreated;	// 9 = 0x9
}
@property(assign, nonatomic) BOOL hasIsUserCreated;	// G=0x31ced5a5; S=0x31ced5b5; @synthesize=_hasIsUserCreated
@property(readonly, assign, nonatomic) BOOL hasSourceDocument;	// G=0x31ced17d; 
@property(assign, nonatomic) BOOL isUserCreated;	// G=0x31ced195; S=0x31ced1b9; @synthesize=_isUserCreated
@property(retain, nonatomic) GMMDocumentInfo *sourceDocument;	// G=0x31ced571; S=0x31ced581; @synthesize=_sourceDocument
- (void)dealloc;	// 0x31ced139
- (id)description;	// 0x31ced1dd
- (id)dictionaryRepresentation;	// 0x31ced24d
// declared property getter: - (BOOL)hasIsUserCreated;	// 0x31ced5a5
// declared property getter: - (BOOL)hasSourceDocument;	// 0x31ced17d
// declared property getter: - (BOOL)isUserCreated;	// 0x31ced195
- (BOOL)readFrom:(id)from;	// 0x31ced2f9
// declared property setter: - (void)setHasIsUserCreated:(BOOL)created;	// 0x31ced5b5
// declared property setter: - (void)setIsUserCreated:(BOOL)created;	// 0x31ced1b9
// declared property setter: - (void)setSourceDocument:(id)document;	// 0x31ced581
// declared property getter: - (id)sourceDocument;	// 0x31ced571
- (void)writeTo:(id)to;	// 0x31ced49d
@end
