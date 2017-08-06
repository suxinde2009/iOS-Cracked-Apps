//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseNoteTag.h"

@class NSArray, NSString, XYPHNoteImageInfo;

@interface XYPHNoteTagVideo : XYPHBaseNoteTag
{
    NSString *_title;
    NSArray *_imagesList;
    long long _viewCount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long viewCount; // @synthesize viewCount=_viewCount;
@property(retain, nonatomic) NSArray *imagesList; // @synthesize imagesList=_imagesList;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)image;
@property(readonly, nonatomic) XYPHNoteImageInfo *cover;

@end
