//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface ECSRetailCartExtra : NVMModel
{
    _Bool _isInvalid;
    long long _extraId;
    NSString *_name;
    NSString *_content;
    double _price;
    unsigned long long _quantity;
    long long _maxQuantity;
    long long _type;
    long long _categoryId;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long maxQuantity; // @synthesize maxQuantity=_maxQuantity;
@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) unsigned long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long extraId; // @synthesize extraId=_extraId;
- (void).cxx_destruct;

@end
