//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TravelViewedLogInformationModel : CTBusinessBean
{
    NSString *logDate;
    _Bool hasViewed;
    NSString *nearestCardDate;
}

@property(copy, nonatomic) NSString *nearestCardDate; // @synthesize nearestCardDate;
@property(nonatomic) _Bool hasViewed; // @synthesize hasViewed;
@property(copy, nonatomic) NSString *logDate; // @synthesize logDate;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
