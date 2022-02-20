```mermaid
graph TD
   A([用户请求资源])
 ==> B(找到所有资源匹配的Policy)
==> C{匹配deny AccessItem} ==> F

C ==> D{匹配denyException AccessItem}
==> E(拒绝访问)

==> F{匹配allow AccessItem)
==> G(拒绝访问/决策下放)

==> H(允许访问)
==> I{匹配allowException AccessItem}


	style A fill:#ff9f2e, stroke: #333, stroke-width: 2px;
	style B fill:#ff9f2e, stroke: #333, stroke-width: 2px;
	style C fill:#ff9f2e, stroke: #333, stroke-width: 2px;
	style D fill:#ff9f2e, stroke: #333, stroke-width: 2px;
	style E fill:#ff9f2e, stroke: #333, stroke-width: 2px;
	style F fill:#ff9f2e, stroke: #333, stroke-width: 2px;
	style G fill:#ff9f2e, stroke: #333, stroke-width: 2px;
	style H fill:#ff9f2e, stroke: #333, stroke-width: 2px;
	style I fill:#ff9f2e, stroke: #333, stroke-width: 2px;
	
```
