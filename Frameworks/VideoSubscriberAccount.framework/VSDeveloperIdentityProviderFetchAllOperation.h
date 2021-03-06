/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation {
    NSXPCConnection * _connection;
    VSFailable * _result;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) VSFailable *result;

- (void).cxx_destruct;
- (id)_serviceWithErrorHandler:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (void)executionDidBegin;
- (id)init;
- (id)result;
- (void)setConnection:(id)arg1;
- (void)setResult:(id)arg1;

@end
