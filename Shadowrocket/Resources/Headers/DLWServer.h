//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface DLWServer : NSObject <NSCoding>
{
    _Bool _allowInsecure;
    _Bool _ota;
    _Bool _selected;
    _Bool _tls;
    int _weight;
    int _port;
    int _ping;
    NSDate *_created;
    NSDate *_updated;
    NSString *_data;
    NSString *_file;
    NSString *_flag;
    NSString *_host;
    NSString *_method;
    NSString *_obfs;
    NSString *_obfsParam;
    NSString *_password;
    NSString *_proto;
    NSString *_protoParam;
    NSString *_title;
    NSString *_type;
    NSString *_user;
    NSString *_uuid;
}

+ (id)properties;
+ (id)findOrCreate:(id)arg1;
+ (id)create:(id)arg1;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *protoParam; // @synthesize protoParam=_protoParam;
@property(copy, nonatomic) NSString *proto; // @synthesize proto=_proto;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *obfsParam; // @synthesize obfsParam=_obfsParam;
@property(copy, nonatomic) NSString *obfs; // @synthesize obfs=_obfs;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(copy, nonatomic) NSDate *updated; // @synthesize updated=_updated;
@property(copy, nonatomic) NSDate *created; // @synthesize created=_created;
@property(nonatomic) int ping; // @synthesize ping=_ping;
@property(nonatomic) int port; // @synthesize port=_port;
@property(nonatomic) int weight; // @synthesize weight=_weight;
@property(nonatomic) _Bool tls; // @synthesize tls=_tls;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool ota; // @synthesize ota=_ota;
@property(nonatomic) _Bool allowInsecure; // @synthesize allowInsecure=_allowInsecure;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)subscribeServers;
- (id)absoluteFile;
- (void)select;
- (void)save;
- (void)delete;
- (id)JSONDictionary;
- (id)dictionary;
- (id)localizedDescription;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)safeSetValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateFlagWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateSubscribeWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
