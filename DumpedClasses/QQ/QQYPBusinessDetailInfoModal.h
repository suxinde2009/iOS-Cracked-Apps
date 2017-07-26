//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIColor;

@interface QQYPBusinessDetailInfoModal : NSObject
{
    int _nRecommend;
    NSString *_strCompanyName;
    NSString *_strCompanyQPhoneNum;
    NSString *_strHeadImgUrl;
    NSString *_strAdText;
    NSString *_strWebsite;
    NSString *_strCoverImgUrl;
    NSString *_strCategory;
    UIColor *_coverColor;
    NSArray *_arrTelephones;
    NSString *_strId;
    NSString *_strAddr;
    NSString *_topic;
    unsigned int _categoryId;
    long long _latitude;
    long long _longitude;
    id <QQYPDetailInfoDelegate> _delegate;
    int _dataSourceType;
    int _xo;
    _Bool _bFollow;
    NSString *_strCompanyPhoneNum;
}

@property(copy, nonatomic, getter=getFirstCompanyPhoneNum) NSString *strCompanyPhoneNum; // @synthesize strCompanyPhoneNum=_strCompanyPhoneNum;
- (void)refresh;
- (id)getSimpleWebSiteUrl;
@property(nonatomic, getter=getIsNotifyMsg, setter=setIsNotfiyMsg:) _Bool bNotifyMsg;
@property(readonly, nonatomic, getter=getIsFollow) _Bool bFollow; // @synthesize bFollow=_bFollow;
@property(readonly, copy, nonatomic, getter=getSectionName) NSString *strSectionName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSArray *arrTelephones; // @dynamic arrTelephones;
@property(nonatomic) unsigned int categoryId; // @dynamic categoryId;
@property(retain, nonatomic) UIColor *coverColor; // @dynamic coverColor;
@property(nonatomic) int dataSourceType; // @dynamic dataSourceType;
@property(nonatomic) id <QQYPDetailInfoDelegate> delegate; // @dynamic delegate;
@property(nonatomic) long long latitude; // @dynamic latitude;
@property(nonatomic) long long longitude; // @dynamic longitude;
@property(nonatomic) int nRecommend; // @dynamic nRecommend;
@property(copy, nonatomic) NSString *strAdText; // @dynamic strAdText;
@property(copy, nonatomic) NSString *strAddr; // @dynamic strAddr;
@property(copy, nonatomic) NSString *strCategory; // @dynamic strCategory;
@property(copy, nonatomic) NSString *strCompanyName; // @dynamic strCompanyName;
@property(copy, nonatomic) NSString *strCompanyQPhoneNum; // @dynamic strCompanyQPhoneNum;
@property(copy, nonatomic) NSString *strCoverImgUrl; // @dynamic strCoverImgUrl;
@property(copy, nonatomic) NSString *strHeadImgUrl; // @dynamic strHeadImgUrl;
@property(copy, nonatomic) NSString *strId; // @dynamic strId;
@property(copy, nonatomic) NSString *strWebsite; // @dynamic strWebsite;
@property(copy, nonatomic) NSString *topic; // @dynamic topic;

@end
