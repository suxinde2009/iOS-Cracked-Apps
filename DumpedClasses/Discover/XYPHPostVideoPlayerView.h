//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, AVPlayerLayer, UIButton;

@interface XYPHPostVideoPlayerView : UIView
{
    _Bool _removePlayButton;
    double _startTime;
    double _endtime;
    id <XYPHPostVideoPlayerViewDelegate> _delegate;
    AVPlayerLayer *_playerLayer;
    UIButton *_playButton;
}

@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(nonatomic) __weak id <XYPHPostVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool removePlayButton; // @synthesize removePlayButton=_removePlayButton;
@property(nonatomic) double endtime; // @synthesize endtime=_endtime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (void)pauseTapGesture:(id)arg1;
- (void)playButtonTouchUpInside:(id)arg1;
- (void)setToPlayStatus;
- (void)setToPauseStatus;
@property(readonly, nonatomic) AVPlayer *player;
- (void)setPlayer:(id)arg1;
- (void)dealloc;
- (void)setup;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
