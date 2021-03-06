/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import "DASearchQuery.h"

@class NSDate, NSString;

@interface DAMailboxSearchQuery : DASearchQuery {
	NSString *_collectionID;	// 32 = 0x20
	int _bodyType;	// 36 = 0x24
	long long _truncationSize;	// 40 = 0x28
	BOOL _allOrNone;	// 48 = 0x30
	NSDate *_priorToDate;	// 52 = 0x34
	int _MIMESupport;	// 56 = 0x38
	BOOL _deepTraversal;	// 60 = 0x3c
	BOOL _rebuildResults;	// 61 = 0x3d
}
@property(assign) int MIMESupport;	// G=0x37048629; S=0x37048639; @synthesize=_MIMESupport
@property(assign) BOOL allOrNone;	// G=0x370485d1; S=0x370485e1; @synthesize=_allOrNone
@property(assign) int bodyType;	// G=0x37048549; S=0x37048559; @synthesize=_bodyType
@property(retain) NSString *collectionID;	// G=0x37048511; S=0x37048525; @synthesize=_collectionID
@property(assign) BOOL deepTraversal;	// G=0x37048649; S=0x37048659; @synthesize=_deepTraversal
@property(retain) NSDate *priorToDate;	// G=0x370485f1; S=0x37048605; @synthesize=_priorToDate
@property(assign) BOOL rebuildResults;	// G=0x37048669; S=0x37048679; @synthesize=_rebuildResults
@property(assign) long long truncationSize;	// G=0x37048569; S=0x3704859d; @synthesize=_truncationSize
+ (id)mailboxSearchQueryWithSearchString:(id)searchString consumer:(id)consumer;	// 0x37047fe1
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x3704813d
- (id)initWithSearchString:(id)searchString consumer:(id)consumer;	// 0x3704802d
// declared property getter: - (int)MIMESupport;	// 0x37048629
// declared property getter: - (BOOL)allOrNone;	// 0x370485d1
// declared property getter: - (int)bodyType;	// 0x37048549
// declared property getter: - (id)collectionID;	// 0x37048511
- (void)dealloc;	// 0x370480dd
// declared property getter: - (BOOL)deepTraversal;	// 0x37048649
- (id)dictionaryRepresentation;	// 0x37048329
// declared property getter: - (id)priorToDate;	// 0x370485f1
// declared property getter: - (BOOL)rebuildResults;	// 0x37048669
// declared property setter: - (void)setAllOrNone:(BOOL)none;	// 0x370485e1
// declared property setter: - (void)setBodyType:(int)type;	// 0x37048559
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x37048525
// declared property setter: - (void)setDeepTraversal:(BOOL)traversal;	// 0x37048659
// declared property setter: - (void)setMIMESupport:(int)support;	// 0x37048639
// declared property setter: - (void)setPriorToDate:(id)date;	// 0x37048605
// declared property setter: - (void)setRebuildResults:(BOOL)results;	// 0x37048679
// declared property setter: - (void)setTruncationSize:(long long)size;	// 0x3704859d
// declared property getter: - (long long)truncationSize;	// 0x37048569
@end

