//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTLoginWidget.h"

@class NSString;

@interface CTCtripOAuthLoginWidget : CTLoginWidget
{
    NSString *_scheme;
}

@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (void)returnToOriginAPPWithOAuthCode:(id)arg1 result:(unsigned long long)arg2;
- (void)changeWindow;
- (void)leftItemClicked;
- (void)handleTitleBarLeftButton:(id)arg1;
- (void)handleTitleBarRightButton:(id)arg1;
- (void)widgetWillAppear;
- (void)widgetDidAppear;

@end
