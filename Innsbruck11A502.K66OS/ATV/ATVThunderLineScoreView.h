/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRAsyncImageControl, NSDictionary, BRImageControl, BRTextControl, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVThunderLineScoreView : BRControl {
	NSDictionary *_data;	// 84 = 0x54
	BRTextControl *_homeTeamName;	// 88 = 0x58
	BRTextControl *_awayTeamName;	// 92 = 0x5c
	BRTextControl *_homeTeamScore;	// 96 = 0x60
	BRTextControl *_awayTeamScore;	// 100 = 0x64
	BRAsyncImageControl *_homeTeamLogo;	// 104 = 0x68
	BRAsyncImageControl *_awayTeamLogo;	// 108 = 0x6c
	BRTextControl *_gamePeriod;	// 112 = 0x70
	BRTextControl *_gameTime;	// 116 = 0x74
	BRTextControl *_gameState;	// 120 = 0x78
	BRImageControl *_lineScoreBG;	// 124 = 0x7c
	BRTableView *_lineScoreTable;	// 128 = 0x80
}
- (id)initWithDictionary:(id)dictionary;	// 0x26e265
- (id)_gamePeriodAttributes;	// 0x26f585
- (id)_gameStateAttributes;	// 0x26f5cd
- (id)_gameTimeAttributes;	// 0x26f5a9
- (id)_scoreAttributes;	// 0x26f561
- (id)_tableCellAttributes;	// 0x26f615
- (id)_tableHeaderAttributes;	// 0x26f5f1
- (id)_teamNameAttributes;	// 0x26f53d
- (id)accessibilityLabel;	// 0x26f45d
- (void)dealloc;	// 0x26e885
- (float)headerHeightForTableView:(id)tableView;	// 0x26f451
- (void)layoutSubcontrols;	// 0x26e9c9
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x26f065
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x26f069
- (long)numberOfRowsInTableView:(id)tableView;	// 0x26f061
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x26e9b1
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x26f229
- (float)tableView:(id)view heightForRow:(long)row;	// 0x26f445
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x26f06d
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x26f3ed
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x26f435
@end
