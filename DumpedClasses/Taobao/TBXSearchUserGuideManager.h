//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBXSearchGuideContainerView, UIWindow;

@interface TBXSearchUserGuideManager : NSObject
{
    TBXSearchGuideContainerView *_containerView;
    UIWindow *_window;
}

+ (id)shared;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) TBXSearchGuideContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)removeGuideView;
- (void)showGuideView;
- (void)setTransprantArea:(id)arg1;
- (void)managerInit;
- (void)guideclicked:(id)arg1;

@end
