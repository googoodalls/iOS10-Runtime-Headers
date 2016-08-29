/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFRoomSuggestion : NSObject {
    NSSet * _aliases;
    NSString * _name;
    long long  _priority;
}

@property (nonatomic, readonly, copy) NSSet *aliases;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long priority;

+ (id)suggestionWithName:(id)arg1 priority:(long long)arg2;
+ (id)suggestionWithName:(id)arg1 priority:(long long)arg2 aliases:(id)arg3;

- (void).cxx_destruct;
- (id)aliases;
- (id)name;
- (long long)priority;

@end