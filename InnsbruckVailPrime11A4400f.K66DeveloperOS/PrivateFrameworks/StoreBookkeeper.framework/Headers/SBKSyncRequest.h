/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "SBKRequest.h"

@class SBKSyncTransaction;

@interface SBKSyncRequest : SBKRequest {
	SBKSyncTransaction *_transaction;	// 44 = 0x2c
}
@property(retain, nonatomic) SBKSyncTransaction *transaction;	// G=0x327c551d; S=0x327c552d; @synthesize=_transaction
+ (int)bodyContentEncodingType;	// 0x327c541d
+ (int)bodyContentType;	// 0x327c53c5
+ (id)requestForTransaction:(id)transaction;	// 0x327c5259
- (void).cxx_destruct;	// 0x327c5555
- (id)canonicalResponseForResponse:(id)response;	// 0x327c5475
- (id)newURLOperation;	// 0x327c54ed
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x327c552d
// declared property getter: - (id)transaction;	// 0x327c551d
@end
