//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iCarousel.h"

@interface iCarouselPlayerView : iCarousel
{
    id <iCarouselPlayerScrollDelegate> _playerScrollDelegate;
}

@property(nonatomic) __weak id <iCarouselPlayerScrollDelegate> playerScrollDelegate; // @synthesize playerScrollDelegate=_playerScrollDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@end
