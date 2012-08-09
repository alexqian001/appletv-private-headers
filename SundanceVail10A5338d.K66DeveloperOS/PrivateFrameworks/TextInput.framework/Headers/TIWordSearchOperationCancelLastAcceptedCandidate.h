/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIWordSearchOperation.h"

@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation {
	TIMecabraWrapper *_mecabraWrapper;	// 12 = 0xc
}
@property(retain, nonatomic) TIMecabraWrapper *mecabraWrapper;	// G=0x349984fd; S=0x3499850d; @synthesize=_mecabraWrapper
- (id)initWithWordSearch:(id)wordSearch;	// 0x34998419
- (void)cancel;	// 0x349984c9
- (void)dealloc;	// 0x3499847d
// declared property getter: - (id)mecabraWrapper;	// 0x349984fd
- (void)perform;	// 0x349984cd
// declared property setter: - (void)setMecabraWrapper:(id)wrapper;	// 0x3499850d
@end
