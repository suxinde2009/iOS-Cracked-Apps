//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CGUpnpStateVariable : NSObject
{
    struct _CgUpnpStateVariable *cObject;
}

@property(readonly) struct _CgUpnpStateVariable *cObject; // @synthesize cObject;
- (long long)statusCode;
- (_Bool)query;
- (_Bool)isAllowedValue:(id)arg1;
- (id)allowedValues;
- (id)value;
- (id)name;
- (void)dealloc;
- (id)init;
- (id)initWithCObject:(struct _CgUpnpStateVariable *)arg1;

@end
