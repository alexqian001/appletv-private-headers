/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASTask.h"

@class DASearchQuery;

@interface ASSearchTask : ASTask {
	DASearchQuery *_query;	// 108 = 0x6c
	int _numDownloadedElements;	// 112 = 0x70
}
@property(readonly, assign) DASearchQuery *query;	// G=0x322759bd; @synthesize=_query
- (id)initWithQuery:(id)query;	// 0x32275821
- (int)commandCode;	// 0x322758c1
- (void)dealloc;	// 0x32275875
- (id)description;	// 0x32275955
// declared property getter: - (id)query;	// 0x322759bd
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x322758c5
@end
