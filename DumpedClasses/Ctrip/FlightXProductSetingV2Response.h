//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightXProductSetingV2Response : CTBusinessBean
{
    int _result;
    NSString *_resultMsg;
    NSMutableArray *_flightXProductSetingList;
    NSMutableArray *_noteList;
    NSMutableArray *_couponInfoList;
}

@property(retain, nonatomic) NSMutableArray *couponInfoList; // @synthesize couponInfoList=_couponInfoList;
@property(retain, nonatomic) NSMutableArray *noteList; // @synthesize noteList=_noteList;
@property(retain, nonatomic) NSMutableArray *flightXProductSetingList; // @synthesize flightXProductSetingList=_flightXProductSetingList;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
