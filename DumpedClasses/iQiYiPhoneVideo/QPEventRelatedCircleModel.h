//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface QPEventRelatedCircleModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_circleId;
    NSNumber *_circleType;
    NSNumber *_circleNewFeedCount;
    NSString *_circleName;
    NSString *_circleIcon;
    NSString *_circleDesc;
    double _nameWidth;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double nameWidth; // @synthesize nameWidth=_nameWidth;
@property(copy, nonatomic) NSString *circleDesc; // @synthesize circleDesc=_circleDesc;
@property(copy, nonatomic) NSString *circleIcon; // @synthesize circleIcon=_circleIcon;
@property(copy, nonatomic) NSString *circleName; // @synthesize circleName=_circleName;
@property(copy, nonatomic) NSNumber *circleNewFeedCount; // @synthesize circleNewFeedCount=_circleNewFeedCount;
@property(retain, nonatomic) NSNumber *circleType; // @synthesize circleType=_circleType;
@property(retain, nonatomic) NSNumber *circleId; // @synthesize circleId=_circleId;
- (void).cxx_destruct;

@end

