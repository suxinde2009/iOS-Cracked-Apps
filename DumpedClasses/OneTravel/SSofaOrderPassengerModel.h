//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSofaBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>, SSofaOrderStationModel;

@interface SSofaOrderPassengerModel : SSofaBaseModel
{
    NSString<Optional> *_username;
    NSString<Optional> *_uid;
    NSNumber<Optional> *_status;
    NSString<Optional> *_avatar;
    NSString<Optional> *_icon;
    NSString<Optional> *_passengerCnt;
    SSofaOrderStationModel *_start;
    SSofaOrderStationModel *_end;
    NSNumber<Optional> *_isDisplayAvadaInMap;
}

@property(retain, nonatomic) NSNumber<Optional> *isDisplayAvadaInMap; // @synthesize isDisplayAvadaInMap=_isDisplayAvadaInMap;
@property(retain, nonatomic) SSofaOrderStationModel *end; // @synthesize end=_end;
@property(retain, nonatomic) SSofaOrderStationModel *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString<Optional> *passengerCnt; // @synthesize passengerCnt=_passengerCnt;
@property(copy, nonatomic) NSString<Optional> *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString<Optional> *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSNumber<Optional> *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString<Optional> *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString<Optional> *username; // @synthesize username=_username;
- (void).cxx_destruct;

@end
