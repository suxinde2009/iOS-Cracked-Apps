//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APSearchResponse : NSObject
{
    id _callback;
    id _owner;
    NSString *_searchText;
}

@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) id owner; // @synthesize owner=_owner;
@property(retain, nonatomic) id callback; // @synthesize callback=_callback;
- (void).cxx_destruct;

@end
