//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBCartEventBase;

@interface TBCartActionCustomizer : NSObject
{
    NSString *_cartClient;
    TBCartEventBase *_eventBase;
}

@property(retain, nonatomic) TBCartEventBase *eventBase; // @synthesize eventBase=_eventBase;
@property(retain, nonatomic) NSString *cartClient; // @synthesize cartClient=_cartClient;
- (void).cxx_destruct;
- (void)customizeAction:(id)arg1;
- (id)argsForItemAlt:(id)arg1;
- (id)argsForItem:(id)arg1;
- (id)argsForShop:(id)arg1;
- (void)addUserTrackClicked:(id)arg1 controlName:(id)arg2;
- (id)init;

@end
