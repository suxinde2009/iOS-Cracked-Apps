//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeImageView, KGThemeLabel, KGThemeLine, KTVDynamicPlayerView, KtvUserAvatar, NSAttributedString, NSString, OHAttributedLabel, UIButton, UIImageView;

@interface KTVKSongInviDynamicTagView : UIView
{
    UIButton *_playPauseBtn;
    KGThemeLabel *_opusNameLabel;
    UIImageView *_inviteTagImgView;
    KGThemeLabel *_opusPlayerLabel;
    KGThemeLabel *_inviterLabel;
    KGThemeLabel *_giveTxtLabel;
    KGThemeLabel *_listenCountLabel;
    KGThemeImageView *_scoreLabel;
    UIView *_messageView;
    OHAttributedLabel *_messageLabel;
    KGThemeLine *_bgView;
    KGThemeLine *_separatorLine;
    _Bool isTouchVoid;
    NSString *_opusPlayerHeadImgURLStr;
    KTVDynamicPlayerView *_playerView;
    NSString *_inviterHeadImgURLStr;
    NSString *_opusName;
    NSString *_opusPlayerName;
    NSString *_inviterName;
    NSString *_scoreRank;
    NSString *_listenCountStr;
    NSAttributedString *_invitedMsg;
    id <KTVKSongInviDynamicTagViewDelegate> _delegate;
    KtvUserAvatar *_invitedPlayerAvatar;
    struct CGPoint _startPoint;
}

+ (float)getInviDynamicRealHeightWithMsgStr:(id)arg1 dynamicWidth:(float)arg2;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) KtvUserAvatar *invitedPlayerAvatar; // @synthesize invitedPlayerAvatar=_invitedPlayerAvatar;
@property(nonatomic) __weak id <KTVKSongInviDynamicTagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSAttributedString *invitedMsg; // @synthesize invitedMsg=_invitedMsg;
@property(copy, nonatomic) NSString *listenCountStr; // @synthesize listenCountStr=_listenCountStr;
@property(copy, nonatomic) NSString *scoreRank; // @synthesize scoreRank=_scoreRank;
@property(copy, nonatomic) NSString *inviterName; // @synthesize inviterName=_inviterName;
@property(copy, nonatomic) NSString *opusPlayerName; // @synthesize opusPlayerName=_opusPlayerName;
@property(copy, nonatomic) NSString *opusName; // @synthesize opusName=_opusName;
@property(copy, nonatomic) NSString *inviterHeadImgURLStr; // @synthesize inviterHeadImgURLStr=_inviterHeadImgURLStr;
@property(retain, nonatomic) KTVDynamicPlayerView *playerView; // @synthesize playerView=_playerView;
@property(copy, nonatomic) NSString *opusPlayerHeadImgURLStr; // @synthesize opusPlayerHeadImgURLStr=_opusPlayerHeadImgURLStr;
- (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dynamicTagViewDidTapped:(id)arg1;
- (void)playPauseBtnDidClicked_TouchUpInside:(id)arg1;
- (void)layoutSubviews;
- (void)refreshDynamicTagWithPlayState:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
